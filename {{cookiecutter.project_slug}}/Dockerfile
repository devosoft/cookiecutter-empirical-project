FROM devosoft/empirical

USER root

COPY . /opt/{{cookiecutter.project_slug}}

# make sure unprivileged user has access to new files in opt
# adapted from https://stackoverflow.com/a/27703359
# and https://superuser.com/a/235398
RUN \
  chgrp --recursive user /opt/{{cookiecutter.project_slug}} \
    && \
  chmod --recursive g+rwx /opt/{{cookiecutter.project_slug}} \
    && \
  echo "user granted permissions to /opt/{{cookiecutter.project_slug}}"

USER user

RUN \
  cd /opt/{{cookiecutter.project_slug}} \
    && \
  make install-test-dependencies \
    && \
  echo "installed test dependencies"