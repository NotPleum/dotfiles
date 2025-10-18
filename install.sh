#!/usr/bin/env bash
set -e

echo "🚀 Restoring dotfiles..."

# === configs ===
rsync -avh --mkpath .config/hypr ~/.config/
rsync -avh --mkpath .config/waybar ~/.config/
rsync -avh --mkpath .config/mako ~/.config/
rsync -avh --mkpath .config/wofi ~/.config/
rsync -avh --mkpath .config/wlogout ~/.config/
rsync -avh --mkpath .config/kitty ~/.config/
rsync -avh --mkpath .config/fastfetch ~/.config/
rsync -avh --mkpath .config/gtk-3.0 ~/.config/
rsync -avh --mkpath .config/gtk-4.0 ~/.config/
rsync -avh --mkpath .config/qt5ct ~/.config/
rsync -avh --mkpath .config/qt6ct ~/.config/

# === shell ===
cp -f .zshrc ~/

# === local bin scripts ===
rsync -avh --mkpath .local/bin ~/.local/


echo "✅ Dotfiles restored successfully!"

