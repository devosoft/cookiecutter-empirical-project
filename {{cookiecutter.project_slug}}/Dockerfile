FROM devosoft/empirical

COPY . /opt/{{cookiecutter.project_slug}}

# make sure unprivileged user has access to new files in opt
# adapted from https://stackoverflow.com/a/27703359
# and https://superuser.com/a/235398
RUN \
  chgrp --recursive user /opt \
    && \
  chmod --recursive g+rwx /opt \
    && \
  echo "user added and granted permissions to /opt"
