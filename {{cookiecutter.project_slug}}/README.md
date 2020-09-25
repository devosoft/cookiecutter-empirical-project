
{% set is_open_source = cookiecutter.open_source_license != 'Not open source' -%}  # {{ cookiecutter.project_name }}

{% if is_open_source %}
[![version](https://img.shields.io/endpoint?url=https%3A%2F%2F{{ cookiecutter.github_username }}.github.io%2F{{ cookiecutter.project_slug }}%2Fversion-badge.json)](https://github.com/{{ cookiecutter.github_username }}/{{ cookiecutter.project_slug }}/releases)
[![](https://img.shields.io/travis/{{ cookiecutter.github_username }}/{{ cookiecutter.project_slug }}.svg)](https://travis-ci.com/{{ cookiecutter.github_username }}/{{ cookiecutter.project_slug }})
[![Documentation Status](https://readthedocs.org/projects/{{ cookiecutter.project_slug | replace("_", "-") }}/badge/?version=latest)](https://{{ cookiecutter.project_slug | replace("_", "-") }}.readthedocs.io/en/latest/?badge=latest)
[![documentation coverage](https://img.shields.io/endpoint?url=https%3A%2F%2F{{ cookiecutter.github_username }}.github.io%2F{{ cookiecutter.project_slug }}%2Fdocumentation-coverage-badge.json)](https://{{ cookiecutter.project_slug }}.readthedocs.io/en/latest/)
[![code coverage status](https://codecov.io/gh/{{ cookiecutter.github_username }}/{{ cookiecutter.project_slug }}/branch/master/graph/badge.svg)](https://codecov.io/gh/{{ cookiecutter.github_username }}/{{ cookiecutter.project_slug }})
[![dotos](https://img.shields.io/endpoint?url=https%3A%2F%2F{{ cookiecutter.github_username }}.com%2Fconduit%2Fdoto-badge.json)](https://github.com/{{ cookiecutter.github_username }}/conduit/search?q=todo+OR+fixme&type=)
[![GitHub stars](https://img.shields.io/github/stars/{{ cookiecutter.github_username }}/conduit.svg?style=flat-square&logo=github&label=Stars&logoColor=white)](https://github.com/{{ cookiecutter.github_username }}/conduit)
{%- endif %}

{{ cookiecutter.project_short_description }}

Check out the live in-browser web app at [https://{{ cookiecutter.github_username }}.github.io/{{ cookiecutter.project_slug }}][].

{% if is_open_source %}
-   Free software: {{ cookiecutter.open_source_license }}
-   Documentation: <https://{{ cookiecutter.project_slug | replace("_", "-") }}.readthedocs.io>. {% endif %}

## Features

-   TODO

![cookie monster example](docs/assets/cookie.gif)

## Credits

This package was created with [Cookiecutter][] and the [devosoft/cookiecutter-empirical-project][] project template.

This package uses [Empirical](https://github.com/devosoft/Empirical#readme), a library of tools for scientific software development, with emphasis on also being able to build web interfaces using Emscripten.

## Dependencies

To install [Empirical](https://github.com/devosoft/Empirical), pull down a clone of the Empirical repository.  See [Quick Start Guides](https://empirical.readthedocs.io/en/latest/QuickStartGuides) for directions on cloning and using the library.


  [https://{{ cookiecutter.github_username }}.github.io/{{ cookiecutter.project_slug }}]:
    https://{{ cookiecutter.github_username }}.github.io/{{ cookiecutter.project_slug }}
  [Cookiecutter]: https://github.com/audreyr/cookiecutter
  [devosoft/cookiecutter-empirical-project]: https://github.com/devosoft/cookiecutter-empirical-project
