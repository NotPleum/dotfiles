#!/bin/bash

statefile="/tmp/powerstate"
current=$(cat /sys/class/power_supply/ADP1/online)

if [ -f "$statefile" ]; then
  last=$(cat "$statefile")
else
  last=""
fi

if [ "$current" != "$last" ]; then
  if [ "$current" = "1" ]; then
    notify-send "Charging!!!"
  else
    notify-send "Discharging!!!"
  fi
fi

echo "$current" >"$statefile"
