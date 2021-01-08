#!/bin/bash

# After success travis code
git config --global user.email 'octocat@github.com'
git config --global user.name 'Github Action'
make badges
cd web
git init
git remote add origin "https://${ GH_TOKEN }@github.com/{{ cookiecutter.github_username }}/{{ cookiecutter.project_slug }}.git" > /dev/null 2>&1
git checkout -b gh-pages
git add .
git commit --message "GitHub Action ${GITHUB_RUN_NUMBER}"
git push --force --quiet origin gh-pages || echo "didn't push, not on deployment branch"
