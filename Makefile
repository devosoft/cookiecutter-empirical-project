.PHONY: test clean

Empirical:
	git clone https://github.com/devosoft/Empirical.git

test: Empirical
	echo "\n\n\n\n\n\n\n\n1\n\n" | cookiecutter . \
	&& cd project_name && make test

clean:
	rm -rf Empirical project_name emsdk
