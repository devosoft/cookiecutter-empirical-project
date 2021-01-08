# Cookiecutter Empirical Project

[![Travis CI badge](https://travis-ci.org/devosoft/cookiecutter-empirical-project.svg?branch=master)](https://travis-ci.org/devosoft/cookiecutter-empirical-project)

[Cookiecutter](https://github.com/audreyr/cookiecutter) template for an Empirical Project.
Take a look at a live example of an instantiated template [here](https://github.com/devosoft/cookiecutter-empirical-project/tree/cut-cookie).

* GitHub repo: https://github.com/devosoft/cookiecutter-empirical-project/
* Free software: MIT LICENSE

An offshoot of the [Empirical C++ Library](https://github.com/devosoft/Empirical).

## Features

* [GitHub Actions](https://github.com/features/actions): Ready for Continuous Integration testing and deployment with GitHub actions.
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

`hooks/post_gen_project.sh` will run to initialize submodules.
If you want your repo to automatically push to github, set up the remote repo first.

Take it for a spin!
```bash
make test
```

Then add the repo to your [ReadTheDocs](https://readthedocs.io/) account + turn on the ReadTheDocs service hook.
