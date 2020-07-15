# Cookiecutter Empirical Project

[![Travis CI badge](https://travis-ci.org/devosoft/cookiecutter-empirical-project.svg?branch=master)](https://travis-ci.org/devosoft/cookiecutter-empirical-project)

[Cookiecutter](https://github.com/audreyr/cookiecutter) template for an Empirical Project.

* GitHub repo: https://github.com/devosoft/cookiecutter-empirical-project/
* Free software: MIT LICENSE

An offshoot of the [Empirical C++ Library](https://github.com/devosoft/Empirical).

## Features

* [Travis-CI](http://travis-ci.org/): Ready for Travis Continuous Integration testing.
* [Github Pages](https://pages.github.com/): Auto-deploy your web application (like [this](https://devosoft.github.io/cookiecutter-empirical-project)).
* [Sphinx](http://sphinx-doc.org/) docs: Documentation ready for generation and deployment with, for example, [ReadTheDocs](https://readthedocs.io/).
* [Bumpversion](https://github.com/peritus/bumpversion): Pre-configured version bumping with a single command.

## Quickstart

Install the latest Cookiecutter if you haven't installed it yet::
```bash
pip install -U cookiecutter
```

Generate an Empirical project:
```bash
cookiecutter https://github.com/devosoft/cookiecutter-empirical-project.git
```

Get set up a repo on Github & make some git goodness happen:
```bash
cd your-cut-project
git init
git add .
git submodule add https://github.com/philsquared/Catch.git third-party/Catch
git submodule add -b master https://github.com/devosoft/Empirical.git third-party/Empirical
git commit -m "Initial commit"
git submodule init
git submodule update
git remote add origin git@github.com:yourusername/your-cut-project.git
git push origin master
```

:bangbang:
Want to track a particular Empirical commit instead of the master branch?
Just omit `-b master` above.

Take it for a spin!
```bash
make test
```

Then:

* If you haven't already, link your GitHub account to [Travis CI](https://travis-ci.org/signup).
* The repo might start building on Travis automatically, but if it doesn't [add it manually](https://travis-ci.org/account/repositories).
* To enable automatic GitHub pages deployment, store a secret GithHub access token to the Travis-CI environment variable `GH_TOKEN`.
  1. [Generate a new GitHub personal access token.](https://github.com/settings/tokens/new)
    * [x] Select the `repo` (`Full control of private repositories`) scope.
    * :bangbang: Be sure to keep a copy on hand for the next step!
  2. `echo GH_TOKEN=my_github_token | travis encrypt --no-interactive --com --add`
    * You'll need [Travis-CI's Ruby gem](https://github.com/travis-ci/travis.rb) (`sudo gem install travis`).
  3. `git add .travis.yml -m "Add GH_TOKEN var to Travis env" && git push origin master`
  4. Once Travis builds, your site should deploy to `https://yourusername.github.io/your-cut-project`.
    * :information_source: Travis will push a `gh-pages` branch to your repo.
    No touchy.
    Just leave it be!
  5. (If your page doesn't auto-deploy, you might have to manually activate Github Pages in your repo settings.)
* Canonical reference RE: storing a personal access token on Travis [here](https://gist.github.com/willprice/e07efd73fb7f13f917ea).
* Add the repo to your [ReadTheDocs](https://readthedocs.io/) account + turn on the ReadTheDocs service hook.
