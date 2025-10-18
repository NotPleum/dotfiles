#!/bin/bash
# Pull Pywal colors into VSCodium theme

WAL_COLORS="$HOME/.cache/wal/colors.json"
SETTINGS="$HOME/.config/VSCodium/User/settings.json"

if [[ ! -f "$WAL_COLORS" || ! -f "$SETTINGS" ]]; then
  echo "Missing wal colors or VSCodium settings."
  exit 1
fi

# Extract some colors from wal
bg=$(jq -r '.colors.color0' "$WAL_COLORS")
fg=$(jq -r '.special.foreground' "$WAL_COLORS")
accent=$(jq -r '.colors.color4' "$WAL_COLORS")
sidebar=$(jq -r '.colors.color1' "$WAL_COLORS")

# Inject into VSCodium theme
jq --arg bg "$bg" --arg fg "$fg" --arg accent "$accent" --arg sidebar "$sidebar" \
'.["workbench.colorCustomizations"] = {
    "editor.background": $bg,
    "editor.foreground": $fg,
    "sideBar.background": $sidebar,
    "activityBar.background": $sidebar,
    "activityBar.foreground": $fg,
    "statusBar.background": $accent,
    "statusBar.foreground": $fg,
    "titleBar.activeBackground": $sidebar,
    "titleBar.activeForeground": $fg
}' "$SETTINGS" > "${SETTINGS}.tmp" && mv "${SETTINGS}.tmp" "$SETTINGS"

echo "✅ Updated VSCodium colors from Pywal."

