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

* Add the repo to your Travis-CI_ account.
* To enable automatic GitHub pages deployment, [securely store](https://gist.github.com/willprice/e07efd73fb7f13f917ea) a secret GithHub access token to the Travis-CI environment variable `GH_TOKEN` and activate Github Pages in your repo settings.
* Add the repo to your [ReadTheDocs](https://readthedocs.io/) account + turn on the ReadTheDocs service hook.
