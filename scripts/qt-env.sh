#!/usr/bin/env bash

if [[ "${BASH_SOURCE[0]}" == "$0" ]]; then
    printf 'Source this file instead of executing it: source %s\n' "$0" >&2
    exit 1
fi

QT_ROOT="${QT_ROOT:-/home/ww/Qt/5.15.2/gcc_64}"
if [[ ! -x "$QT_ROOT/bin/qmake" ]]; then
    printf 'Qt qmake not found or not executable: %s/bin/qmake\n' "$QT_ROOT" >&2
    return 1
fi

export QT_ROOT
export QMAKE="$QT_ROOT/bin/qmake"
export QT_PLUGIN_PATH="$QT_ROOT/plugins"
export QT_QPA_PLATFORM_PLUGIN_PATH="$QT_ROOT/plugins/platforms"
export QML2_IMPORT_PATH="$QT_ROOT/qml"

case ":${PATH:-}:" in
    *":$QT_ROOT/bin:"*) ;;
    *) export PATH="$QT_ROOT/bin${PATH:+:$PATH}" ;;
esac

case ":${LD_LIBRARY_PATH:-}:" in
    *":$QT_ROOT/lib:"*) ;;
    *) export LD_LIBRARY_PATH="$QT_ROOT/lib${LD_LIBRARY_PATH:+:$LD_LIBRARY_PATH}" ;;
esac

case ":${CMAKE_PREFIX_PATH:-}:" in
    *":$QT_ROOT:"*) ;;
    *) export CMAKE_PREFIX_PATH="$QT_ROOT${CMAKE_PREFIX_PATH:+:$CMAKE_PREFIX_PATH}" ;;
esac

case ":${PKG_CONFIG_PATH:-}:" in
    *":$QT_ROOT/lib/pkgconfig:"*) ;;
    *) export PKG_CONFIG_PATH="$QT_ROOT/lib/pkgconfig${PKG_CONFIG_PATH:+:$PKG_CONFIG_PATH}" ;;
esac

printf 'Qt environment configured: %s (Qt %s)\n' \
    "$QT_ROOT" "$("$QMAKE" -query QT_VERSION)"
