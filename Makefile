.PHONY: test clean

Empirical:
	git clone https://github.com/devosoft/Empirical.git

test: Empirical
	echo "\n\n\nCookiecutter Empirical Project\n\n\n\n\n1\n\ncut-cookie\n1\n" | cookiecutter . \
	&& cd cookiecutter-empirical-project \
	&& git init \
	&& git add . \
	&& git submodule add https://github.com/philsquared/Catch.git third-party/Catch \
	&& git commit -m "Initial commit" \
	&& git submodule init \
	&& git submodule  update \
	&& make test

clean:
	rm -rf Empirical cookiecutter-empirical-project emsdk
