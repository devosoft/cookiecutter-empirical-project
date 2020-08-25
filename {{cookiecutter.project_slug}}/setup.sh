#!/bin/bash

chmod +x setup.sh

# Automate git repository and submodule initialization
# Adopted from https://github.com/devosoft/cookiecutter-empirical-project#quickstart
git init
git add .
git submodule add https://github.com/philsquared/Catch.git third-party/Catch
git submodule add -b master https://github.com/devosoft/Empirical.git third-party/Empirical


# Install the Emscripten Compiler
git submodule add https://github.com/emscripten-core/emsdk.git third-party/emsdk
cd third-party/emsdk/
./emsdk install latest
./emsdk activate latest
source ./emsdk_env.sh

git commit -m "Initial commit"
git submodule init
git submodule update

