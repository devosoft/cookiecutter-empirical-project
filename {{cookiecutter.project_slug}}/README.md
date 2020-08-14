
{% set is_open_source = cookiecutter.open_source_license != 'Not open source' -%} {% for _ in cookiecutter.project_name %}={% endfor %} {{ cookiecutter.project_name }} {% for _ in cookiecutter.project_name %}={% endfor %}

{% if is_open_source %} .. image:: <https://img.shields.io/travis/>{{ cookiecutter.github_username }}/{{ cookiecutter.project_slug }}.svg  


>| **target:** | <https://travis-ci.com/>{{ cookiecutter.github_username }}/{{ cookiecutter.project_slug }} |
>| --- | ---| 

[![Documentation Status][]][1]

{%- endif %}

{{ cookiecutter.project_short_description }}

Check out the live in-browser web app at [https://{{ cookiecutter.github_username }}.github.io/{{ cookiecutter.project_slug }}][].
 
{% if is_open_source %} \* Free software: {{ cookiecutter.open_source_license }} \* Documentation: <https://>{{ cookiecutter.project_slug | replace("_", "-") }}.readthedocs.io. {% endif %}

Features
========

-   TODO

Credits
=======

This package was created with [Cookiecutter][] and the [devosoft/cookiecutter-empirical-project][] project template.

  [Documentation Status]: https://readthedocs.org/projects/%7B%7B%20cookiecutter.project_slug%20%7C%20replace(%22_%22,%20%22-%22)%20%7D%7D/badge/?version=latest
  [1]: https://%7B%7B%20cookiecutter.project_slug%20%7C%20replace(%22_%22,%20%22-%22)%20%7D%7D.readthedocs.io/en/latest/?badge=latest
  [https://{{ cookiecutter.github_username }}.github.io/{{ cookiecutter.project_slug }}]:
    https://%7B%7B%20cookiecutter.github_username%20%7D%7D.github.io/%7B%7B%20cookiecutter.project_slug%20%7D%7D
  [Cookiecutter]: https://github.com/audreyr/cookiecutter
  [devosoft/cookiecutter-empirical-project]: https://github.com/devosoft/cookiecutter-empirical-project