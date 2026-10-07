#!/usr/bin/env bash
set -euo pipefail

usage() {
    cat <<'EOF'
Usage: scripts/publish-linux-release.sh [--publish] [--repo OWNER/REPO]

Preview by default. Use --publish to upload the Linux AppImage.
EOF
}

repo="wangweiwei104/SeiSee"
publish=false
while (($#)); do
    case "$1" in
        --publish)
            publish=true
            ;;
        --repo)
            (($# >= 2)) || { echo "Error: --repo requires OWNER/REPO." >&2; exit 2; }
            repo="$2"
            shift
            ;;
        -h|--help)
            usage
            exit 0
            ;;
        *)
            echo "Error: unknown argument: $1" >&2
            usage >&2
            exit 2
            ;;
    esac
    shift
done

script_dir="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
repo_root="$(cd -- "$script_dir/.." && pwd)"
version_header="$repo_root/SeiSeeMp/mainwindow.h"
changelog_path="$repo_root/CHANGELOG.md"

for required_file in "$version_header" "$changelog_path"; do
    [[ -f "$required_file" ]] || { echo "Error: required file not found: $required_file" >&2; exit 1; }
done

mapfile -t versions < <(
    sed -nE 's/^[[:space:]]*#[[:space:]]*define[[:space:]]+VERSION[[:space:]]+"([^"]+)"[[:space:]]*$/\1/p' "$version_header"
)
if ((${#versions[@]} != 1)); then
    echo "Error: expected exactly one #define VERSION \"value\" in $version_header; found ${#versions[@]}." >&2
    exit 1
fi
version="${versions[0]}"
if [[ ! "$version" =~ ^[A-Za-z0-9][A-Za-z0-9.+-]*$ ]]; then
    echo "Error: version cannot safely be used as a GitHub release tag: $version" >&2
    exit 1
fi

notes_file="$(mktemp "${TMPDIR:-/tmp}/seisee-linux-release-notes.XXXXXX")"
trap 'rm -f -- "$notes_file"' EXIT
if ! awk -v version="$version" '
    /^## \[/ {
        heading = $0
        sub(/^## \[/, "", heading)
        sub(/\].*$/, "", heading)
        in_section = heading == version
        if (in_section) {
            matches++
        }
        next
    }
    in_section { print }
    END {
        if (matches != 1) {
            exit 2
        }
    }
' "$changelog_path" >"$notes_file"; then
    echo "Error: expected exactly one CHANGELOG.md section for version $version." >&2
    exit 1
fi
if [[ -z "$(tr -d '[:space:]' <"$notes_file")" ]]; then
    echo "Error: CHANGELOG.md section for version $version is empty." >&2
    exit 1
fi

asset_path="$repo_root/dist/linux/SeiSee-$version-x86_64.AppImage"
if [[ ! -f "$asset_path" ]]; then
    echo "Error: Linux AppImage not found: $asset_path. Build the package before publishing." >&2
    exit 1
fi

printf 'Release: %s:%s\n' "$repo" "$version"
printf 'Linux asset: %s\n' "$asset_path"

if [[ "$publish" != true ]]; then
    printf '\nPreview only. Run with --publish to upload the Linux AppImage.\n'
    exit 0
fi

command -v gh >/dev/null 2>&1 || {
    echo "Error: GitHub CLI (gh) was not found. Install it and run 'gh auth login' before publishing." >&2
    exit 1
}
gh auth status --hostname github.com

release_info=""
release_tag=""
release_draft=""
release_lookup_succeeded=false
release_lookup_error=""
for attempt in 1 2 3; do
    if release_info="$(gh api "repos/$repo/releases/tags/$version" --jq '[.tag_name, .draft] | @tsv' 2>&1)"; then
        release_lookup_succeeded=true
        break
    fi

    release_lookup_error="$release_info"
    if [[ "$release_lookup_error" == *"HTTP 404"* || "$release_lookup_error" == *"Not Found"* ]]; then
        break
    fi
    if ! grep -Eiq 'EOF|timeout|temporar|connection reset|TLS handshake|server misbehaving|HTTP 5[0-9][0-9]' <<<"$release_lookup_error"; then
        break
    fi
    if ((attempt < 3)); then
        delay=$((attempt * 2))
        printf 'Warning: transient GitHub API error (attempt %s/3); retrying in %s seconds: %s\n' \
            "$attempt" "$delay" "$release_lookup_error" >&2
        sleep "$delay"
    fi
done

if [[ "$release_lookup_succeeded" == true ]]; then
    IFS=$'\t' read -r release_tag release_draft <<<"$release_info"
    if [[ "$release_tag" != "$version" ]]; then
        echo "Error: GitHub returned release tag '$release_tag' while checking for $version." >&2
        exit 1
    fi
else
    if [[ "$release_lookup_error" != *"HTTP 404"* && "$release_lookup_error" != *"Not Found"* ]]; then
        printf 'Error: could not check whether release %s exists: %s\n' "$version" "$release_lookup_error" >&2
        exit 1
    fi
fi

if [[ "$release_tag" == "$version" ]]; then
    gh release upload "$version" "$asset_path" --repo "$repo" --clobber
    if [[ "$release_draft" == true ]]; then
        echo "Linux AppImage uploaded to the existing draft release; its notes, status, and other assets were preserved."
    else
        echo "Linux AppImage uploaded to the existing release; its notes, status, and other assets were preserved."
    fi
    exit 0
fi

create_args=(
    release create "$version" "$asset_path"
    --repo "$repo"
    --title "SeiSee $version"
    --notes-file "$notes_file"
)
if [[ "$version" =~ -(alpha|beta|rc)(\.|$) ]]; then
    create_args+=(--prerelease)
fi
gh "${create_args[@]}"
printf 'Release %s created from CHANGELOG.md with the Linux AppImage.\n' "$version"
