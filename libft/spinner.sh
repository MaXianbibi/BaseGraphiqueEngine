
#!/bin/bash

spin()
{
  local -r DELAY="0.1"
  local -r SPINNER="/|\\-/"

  while true; do
    for i in {0..3}; do
      printf "\r\033[0;32m${SPINNER:i:1} Compiling..."
      sleep "$DELAY"
    done
  done
}

spin
