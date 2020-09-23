set -x
#!/bin/bash

# After success travis code
cd ../cut-cookie
printf "\n\nenv:\n  global:\n    secure:%suTo92v1HA9mhToHw8b9BeaJn3SQhLCuMZDbuzA7DvuP2mEsPx9T2SzRWLN38hpKlZ7Yf0de5/o8o+tGMf2917XUeSuba4y97H7lB7SmpvBAukYff/0aTTdEBXIfgM+4XOFWCpsgKP+N+91WeSXb4zccx8VpzNfb6H9FJ3R2P0TFQkuz6CLcy2IHZCRw9r/+61/CuIpaek9PyAoyv0gzlmoMbbBvHvUoKLI/uLgpxd7qTLZOhFv0NvxtPXWZnhAhLGNSNUQ5hadiHfor86WNCOJNuB0y4APSGGWZ0SRZy28xmw+eO2WLWUR4E8pLicwlFCTZIfYXpy1LyMWRh0ZcLQjei9VevCsHuSQ0Kgyb6BV2MOeUbcCGy/xX6XwnmWOJtdK0uTkgFJjrFnsj/VhEauxtfT2P9VbwxAAi3IK/mz/dtY7f0jymGNUoALQlm6hwVSv4o/bBJXsBZUNX6+ErLmqWmsfjUco1zlVdewjsTF4wPv72P7+UfxBNjWLaawk+dU5Z1cf84FBiE4N8ohD1bGITVu1boj0bfdlAMYMu+1Q9r7hXz48MMz0/90eqWB/yDlXrxA1kLvhmMhRm3xK+Gxqeu0W609mDNDh+41OCRjmuolzQKAAGXmDwQi1RJxC/R1XsN96+00imPHz7W28cKaWYc/sLXPOPdbD2uv1wsgdA=" " " >> .travis.yml
make clean
git remote add origin https://mmore500:${GH_TOKEN}@github.com/devosoft/cookiecutter-empirical-project.git > /dev/null 2>&1
git checkout -b cut-cookie
git add .
git commit --message "Travis build ${TRAVIS_BUILD_NUMBER}"
git push --force --quiet origin cut-cookie
