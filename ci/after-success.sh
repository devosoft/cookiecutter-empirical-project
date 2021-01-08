#!/bin/bash

set -x

# After success ci code
cd ../cut-cookie/cookiecutter-empirical-project
make clean
git remote add origin "https://mmore500:${GH_TOKEN}@github.com/devosoft/cookiecutter-empirical-project.git" > /dev/null 2>&1
git checkout -b cut-cookie
git add .
git commit --message "GitHub Action ${GITHUB_RUN_NUMBER}"
# fallback adapted from https://stackoverflow.com/a/29380765
git push --force --quiet origin cut-cookie || \
  ssh-keyscan -t rsa github.com >> ~/.ssh/known_hosts; \
  git push --force --quiet origin cut-cookie
