#!/bin/bash

notify-send "Rebar" "Reinforcing Waybar..."

pkill waybar 2>/dev/null
waybar &
