#pragma once

#include "{{cookiecutter.project_slug}}/exampleConfig.hpp"

void SetupProjectConfig({{ cookiecutter.project_name.replace(' ', '') }}Config & config);
void SetupProjectConfig({{ cookiecutter.project_name.replace(' ', '') }}Config & config, int argc, char* argv[]);
bool example();
