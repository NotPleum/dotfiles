#!/bin/bash

if ! pgrep -x "waybar" >/dev/null; then
  waybar &
elif pgrep -x "waybar" >/dev/null; then
  pkill waybar && waybar &
fi
