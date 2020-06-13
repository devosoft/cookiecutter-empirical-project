.PHONY: test clean

../Empirical:
	cd .. && git clone https://github.com/devosoft/Empirical.git

../cut-cookie:
	echo "\n\n\Cut Cookie\n\n\n\n\n1\n\n\n1\n" | cookiecutter . -o .. \
	&& cd ../cut-cookie \
	&& git init \
	&& git add . \
	&& git submodule add https://github.com/philsquared/Catch.git third-party/Catch \
	&& git commit -m "Initial commit" \
	&& git submodule init \
	&& git submodule  update \

test: ../Empirical ../cut-cookie
	cd ../cut-cookie && make test

clean:
	rm -rf ../cut-cookie
