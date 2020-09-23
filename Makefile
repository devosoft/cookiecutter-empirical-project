.PHONY: test clean

COOKIECUTTER_EMP_DIR?=third-party/Empirical/source

../cut-cookie:
	echo "\n\n\nCut Cookie\n\n\n\n\n1\n$(COOKIECUTTER_EMP_DIR)\ncut-cookie\n1\n" | cookiecutter . -o .. \
	&& cd ../cut-cookie \
	&& git init \
	&& git add . \
	&& git commit -m "Initial commit" \

test: ../cut-cookie
	cd ../cut-cookie && make test

clean:
	rm -rf ../cut-cookie
