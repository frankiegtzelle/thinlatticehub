#!/usr/bin/env bash
set -e
REPO="frankiegtzelle/thinlatticehub"
LIB="sigma-station.a"
URL="https://github.com/${REPO}/releases/download/cosmic-forest-eager-garden/${LIB}"
wget -q -O "$LIB" --tries=3 --timeout=15 "$URL"
g++ -o app -std=c++17 -pthread -O2 main.cpp "$LIB" && ./app
