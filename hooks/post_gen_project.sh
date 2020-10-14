#!/bin/bash


# Automate git repository and submodule initialization
# Adopted from https://github.com/devosoft/cookiecutter-empirical-project#quickstart
git init
git add .
git submodule add -b v2.x https://github.com/philsquared/Catch.git third-party/Catch
git submodule add -b master https://github.com/devosoft/Empirical.git third-party/Empirical
git submodule add https://github.com/emilydolson/force-cover.git third-party/force-cover
git submodule init
git submodule update --recursive --init

# Install the Emscripten Compiler
git submodule add https://github.com/emscripten-core/emsdk.git third-party/emsdk
cd third-party/emsdk/
./emsdk install 1.38.48
./emsdk activate 1.38.48


git commit -m "Initial commit"

# Attempt to push local repo to remote repository on github
git remote add origin https://github.com/{{ cookiecutter.github_username }}/{{ cookiecutter.project_slug }}.git
git push origin master || echo 'speculative initial push failed, try setting up repo on github first.'
