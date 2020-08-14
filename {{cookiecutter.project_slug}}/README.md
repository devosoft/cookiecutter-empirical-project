
{% set is_open_source = cookiecutter.open_source_license != 'Not open source' -%}  # {{ cookiecutter.project_name }}

{% if is_open_source %}
[![](https://img.shields.io/travis/{{ cookiecutter.github_username }}/{{ cookiecutter.project_slug }}.svg)](https://travis-ci.com/{{ cookiecutter.github_username }}/{{ cookiecutter.project_slug }})
[![Documentation Status](https://readthedocs.org/projects/{{ cookiecutter.project_slug | replace("_", "-") }}/badge/?version=latest)](https://{{ cookiecutter.project_slug | replace("_", "-") }}.readthedocs.io/en/latest/?badge=latest)

{%- endif %}

{{ cookiecutter.project_short_description }}

Check out the live in-browser web app at [https://{{ cookiecutter.github_username }}.github.io/{{ cookiecutter.project_slug }}][].
 
{% if is_open_source %} 
-   Free software: {{ cookiecutter.open_source_license }} 
-   Documentation: <https://{{ cookiecutter.project_slug | replace("_", "-") }}.readthedocs.io>. {% endif %}

## Features  

-   TODO

## Credits  

This package was created with [Cookiecutter][] and the [devosoft/cookiecutter-empirical-project][] project template.

  
  [https://{{ cookiecutter.github_username }}.github.io/{{ cookiecutter.project_slug }}]:
    https://{{ cookiecutter.github_username }}.github.io/{{ cookiecutter.project_slug }}
  [Cookiecutter]: https://github.com/audreyr/cookiecutter
  [devosoft/cookiecutter-empirical-project]: https://github.com/devosoft/cookiecutter-empirical-project