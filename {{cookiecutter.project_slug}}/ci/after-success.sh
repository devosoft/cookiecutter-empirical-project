#!/bin/bash

# After success travis code 
cd web
git init
git remote add origin https://${GH_TOKEN}@github.com/{{ cookiecutter.github_username }}/{{ cookiecutter.project_slug }}.git > /dev/null 2>&1
git checkout -b gh-pages
git add .
git commit --message "Travis build ${TRAVIS_BUILD_NUMBER}"
test ${TRAVIS_BRANCH} = "{{ cookiecutter.deployment_branch }}" && git push --force --quiet origin gh-pages