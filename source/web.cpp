//  This file is part of Cookiecutter Empirical Project
//  Copyright (C) Matthew Andres Moreno, 2021.
//  Released under MIT license; see LICENSE

#include <iostream>

#include "emp/web/web.hpp"

#include "cookiecutter-empirical-project/example.hpp"

namespace UI = emp::web;

UI::Document doc("emp_base");

int main()
{
  doc << "<h1>Hello, browser!</h1>";
  std::cout << "Hello, console!" << std::endl;
  return example();
}
