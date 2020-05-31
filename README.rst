======================
Cookiecutter Empirical Project
======================

.. image:: https://travis-ci.org/devosoft/cookiecutter-empirical-project.svg?branch=master
    :target: https://travis-ci.org/devosoft/cookiecutter-empirical-project

Cookiecutter_ template for an Empirical Project.

* GitHub repo: https://github.com/devosoft/cookiecutter-empirical-project/
* Free software: MIT LICENSE

An offshoot of the `Empirical C++ Library`.

Features
--------

* Travis-CI_: Ready for Travis Continuous Integration testing
* `Github Pages`_: Auto-deploy your web application (like this_).
* Sphinx_ docs: Documentation ready for generation with, for example, ReadTheDocs_
* Bumpversion_: Pre-configured version bumping with a single command

Quickstart
----------

Install the latest Cookiecutter if you haven't installed it yet::

    pip install -U cookiecutter

Generate an Empirical project::

    cookiecutter https://github.com/devosoft/cookiecutter-empirical-project.git

Get set up a repo on Github & make some git goodness happen::

    cd your-cut-project
    git init
    git add .
    git submodule add https://github.com/philsquared/Catch.git third-party/Catch
    git commit -m "Initial commit"
    git submodule init
    git submodule update
    git remote add origin git@github.com:yourusername/your-cut-project.git
    git push origin master

Take it for a spin!

    make test

Then:

* Add the repo to your Travis-CI_ account.
* To enable automatic GitHub pages deployment, `securely store`_ a secret GithHub access token to the Travis-CI environment variable `GH_TOKEN` and activate Github Pages in your repo settings.
* Add the repo to your ReadTheDocs_ account + turn on the ReadTheDocs service hook.

.. _`Empirical C++ Library`: https://github.com/devosoft/Empirical
.. _Cookiecutter: https://github.com/audreyr/cookiecutter
.. _Travis-CI: http://travis-ci.org/
.. _this: https://devosoft.github.io/cookiecutter-empirical-project
.. _`Github Pages`: https://pages.github.com/
.. _Sphinx: http://sphinx-doc.org/
.. _ReadTheDocs: https://readthedocs.io/
.. _Bumpversion: https://github.com/peritus/bumpversion
.. _`securely store`: https://gist.github.com/willprice/e07efd73fb7f13f917ea
