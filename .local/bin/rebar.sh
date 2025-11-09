#!/bin/bash

if ! pgrep -x "waybar" >/dev/null; then
  waybar &
  else:
fi
