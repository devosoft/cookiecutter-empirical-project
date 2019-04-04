.PHONY: test clean

Empirical:
	git clone https://github.com/devosoft/Empirical.git

test: Empirical
	echo "\n\n\nCookie Cutter Empirical Project\n\n\n\n\n1\n\ncut-cookie\n1\n" | cookiecutter . \
	&& cd cookiecutter-empirical-project && make test

clean:
	rm -rf Empirical cookiecutter-empirical-project emsdk
