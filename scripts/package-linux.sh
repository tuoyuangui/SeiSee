#!/usr/bin/env bash
set -euo pipefail

SCRIPT_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
REPO_ROOT="$(cd -- "$SCRIPT_DIR/.." && pwd)"
VERSION="${VERSION:-4.0.0-alpha.1}"
SAFE_VERSION="${VERSION//[^A-Za-z0-9._-]/-}"
QMAKE="${QMAKE:-qmake}"
MAKE="${MAKE:-make}"
LINUXDEPLOY="${LINUXDEPLOY:-linuxdeploy}"
APPIMAGETOOL="${APPIMAGETOOL:-appimagetool}"
JOBS="${JOBS:-$(getconf _NPROCESSORS_ONLN 2>/dev/null || echo 2)}"
OUTPUT_DIR="$REPO_ROOT/dist/linux"
OUTPUT="$OUTPUT_DIR/SeiSee-$SAFE_VERSION-x86_64.AppImage"
WORK_DIR="$(mktemp -d "${TMPDIR:-/tmp}/seisee-appimage.XXXXXX")"
APP_DIR="$WORK_DIR/SeiSee.AppDir"
DESKTOP_FILE="$WORK_DIR/seisee.desktop"
ICON_FILE="$REPO_ROOT/SeiSeeMp/images/SeiSeeMp.png"
EXECUTABLE=""

cleanup() {
    rm -rf -- "$WORK_DIR"
}
trap cleanup EXIT

fail() {
    printf 'Error: %s\n' "$*" >&2
    exit 1
}

command -v "$QMAKE" >/dev/null 2>&1 || fail "qmake not found: $QMAKE"
command -v "$MAKE" >/dev/null 2>&1 || fail "make not found: $MAKE"
command -v "$LINUXDEPLOY" >/dev/null 2>&1 || fail "linuxdeploy not found: $LINUXDEPLOY"
command -v linuxdeploy-plugin-qt >/dev/null 2>&1 ||
    fail "linuxdeploy-plugin-qt must be available on PATH"
command -v "$APPIMAGETOOL" >/dev/null 2>&1 ||
    fail "appimagetool not found: $APPIMAGETOOL"
[[ "$(uname -m)" == "x86_64" ]] ||
    fail "This script currently packages x86_64 Linux builds only."

export PATH="$(dirname "$(command -v "$QMAKE")"):$PATH"
export QMAKE
mkdir -p "$OUTPUT_DIR" "$APP_DIR/usr/bin" \
    "$APP_DIR/usr/share/applications" \
    "$APP_DIR/usr/share/icons/hicolor/256x256/apps"

cd "$REPO_ROOT"
"$QMAKE" "$REPO_ROOT/GxApps.pro" -r CONFIG+=release
"$MAKE" distclean
"$QMAKE" "$REPO_ROOT/GxApps.pro" -r CONFIG+=release
"$MAKE" -j"$JOBS"

for candidate in \
    "$REPO_ROOT/SeiSeeMp/release/SeiSeeMp" \
    "$REPO_ROOT/SeiSeeMp/SeiSeeMp"; do
    if [[ -x "$candidate" ]]; then
        EXECUTABLE="$candidate"
        break
    fi
done
[[ -n "$EXECUTABLE" ]] || fail "Built SeiSeeMp executable not found."
[[ -f "$ICON_FILE" ]] || fail "Application icon not found: $ICON_FILE"
install -m 755 "$EXECUTABLE" "$APP_DIR/usr/bin/SeiSeeMp"
install -m 644 "$ICON_FILE" "$APP_DIR/usr/share/icons/hicolor/256x256/apps/seisee.png"

cat > "$DESKTOP_FILE" <<'EOF'
[Desktop Entry]
Type=Application
Name=SeiSee
Comment=Seismic data viewer
Exec=SeiSeeMp
Icon=seisee
Categories=Science;Education;
Terminal=false
EOF
install -m 644 "$DESKTOP_FILE" "$APP_DIR/usr/share/applications/seisee.desktop"

run_appimage_tool() {
    APPIMAGE_EXTRACT_AND_RUN=1 "$@"
}

run_appimage_tool "$LINUXDEPLOY" \
    --appdir "$APP_DIR" \
    --executable "$APP_DIR/usr/bin/SeiSeeMp" \
    --desktop-file "$DESKTOP_FILE" \
    --icon-file "$ICON_FILE" \
    --plugin qt

run_appimage_tool "$APPIMAGETOOL" "$APP_DIR" "$OUTPUT"
printf 'Created AppImage: %s\n' "$OUTPUT"
