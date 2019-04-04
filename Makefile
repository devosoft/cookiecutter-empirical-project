.PHONY: test clean

Empirical:
	git clone https://github.com/devosoft/Empirical.git

test: Empirical
	echo "\n\n\n\n\n\n\n\n1\n\ncut-cookie\n1\n" | cookiecutter . \
	&& cd cut-empirical-project && make test

clean:
	rm -rf Empirical cut-empirical-project emsdk
