.PHONY: test clean

COOKIECUTTER_EMP_DIR ?= third-party/Empirical/source

../cut-cookie:
	mkdir -p ../cut-cookie

../cut-cookie/cookiecutter-empirical-project: ../cut-cookie
	echo "\n\n\nCookiecutter Empirical Project\n\n\n\n1\n$(COOKIECUTTER_EMP_DIR)\ncut-cookie\n1\n\n" | cookiecutter . -o ../cut-cookie/

test: ../cut-cookie/cookiecutter-empirical-project
	cd ../cut-cookie/cookiecutter-empirical-project && make test

clean:
	rm -rf ../cut-cookie
