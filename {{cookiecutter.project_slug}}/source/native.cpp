//  This file is part of {{cookiecutter.project_name}}
//  Copyright (C) {{ cookiecutter.full_name }}, {% now 'local', '%Y' %}.
//  Released under {{ cookiecutter.open_source_license }}; see LICENSE

#include <iostream>

#include "emp/base/vector.hpp"
#include "emp/config/command_line.hpp"

#include "{{cookiecutter.project_slug}}/example.hpp"

// This is the main function for the NATIVE version of {{cookiecutter.project_name}}.

int main(int argc, char* argv[])
{
  emp::vector<std::string> args = emp::cl::args_to_strings(argc, argv);

  std::cout << "Hello, world!" << std::endl;

  return example();
}
