#!/bin/bash

set -x

# After success ci code
cd ../cut-cookie/cookiecutter-empirical-project
make clean
git remote add origin "https://mmore500:${GH_TOKEN}@github.com/devosoft/cookiecutter-empirical-project.git" > /dev/null 2>&1
git checkout -b cut-cookie
git add .
git commit --message "GitHub Action ${GITHUB_RUN_NUMBER}"
git push --force --quiet origin cut-cookie
