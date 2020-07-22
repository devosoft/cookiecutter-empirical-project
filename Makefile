.PHONY: test clean

COOKIECUTTER_EMP_DIR?=third-party/Empirical

../cut-cookie:
	echo "\n\n\nCut Cookie\n\n\n\n\n1\n$(COOKIECUTTER_EMP_DIR)\n\n1\n" | cookiecutter . -o .. \
	&& cd ../cut-cookie \
	&& git init \
	&& git add . \
	&& git submodule add https://github.com/philsquared/Catch.git third-party/Catch \
	&& git submodule add -b master https://github.com/devosoft/Empirical.git third-party/Empirical \
	&& git commit -m "Initial commit" \
	&& git submodule init \
	&& git submodule  update \

test: ../cut-cookie
	cd ../cut-cookie && make test

clean:
	rm -rf ../cut-cookie
