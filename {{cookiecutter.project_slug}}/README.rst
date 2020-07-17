{% set is_open_source = cookiecutter.open_source_license != 'Not open source' -%}
{% for _ in cookiecutter.project_name %}={% endfor %}
{{ cookiecutter.project_name }}
{% for _ in cookiecutter.project_name %}={% endfor %}

{% if is_open_source %}
.. image:: https://img.shields.io/travis/{{ cookiecutter.github_username }}/{{ cookiecutter.project_slug }}.svg
        :target: https://travis-ci.com/{{ cookiecutter.github_username }}/{{ cookiecutter.project_slug }}

.. image:: https://readthedocs.org/projects/{{ cookiecutter.project_slug | replace("_", "-") }}/badge/?version=latest
        :target: https://{{ cookiecutter.project_slug | replace("_", "-") }}.readthedocs.io/en/latest/?badge=latest
        :alt: Documentation Status
{%- endif %}


{{ cookiecutter.project_short_description }}

Check out the live in-browser web app at `https://{{ cookiecutter.github_username }}.github.io/{{ cookiecutter.project_slug }}`_.

{% if is_open_source %}
* Free software: {{ cookiecutter.open_source_license }}
* Documentation: https://{{ cookiecutter.project_slug | replace("_", "-") }}.readthedocs.io.
{% endif %}

Features
--------

* TODO

Credits
-------

This package was created with Cookiecutter_ and the `devosoft/cookiecutter-empirical-project`_ project template.


.. _`https://{{ cookiecutter.github_username }}.github.io/{{ cookiecutter.project_slug }}`: https://{{ cookiecutter.github_username }}.github.io/{{ cookiecutter.project_slug }}
.. _Cookiecutter: https://github.com/audreyr/cookiecutter
.. _`devosoft/cookiecutter-empirical-project`: https://github.com/devosoft/cookiecutter-empirical-project
