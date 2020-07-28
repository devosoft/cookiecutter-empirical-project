//  This file is part of {{cookiecutter.project_name}}
//  Copyright (C) {{ cookiecutter.full_name }}, {% now 'local', '%Y' %}.
//  Released under {{ cookiecutter.open_source_license }}; see LICENSE

#include <iostream>

#include "web/web.h"
#include "prefab/Card.h"
#include "prefab/LoadingModal.h"

#include "../example.h"

namespace UI = emp::web;

UI::Document doc("emp_base");

int main()
{
  doc << "<h1>Hello, browser!</h1>";
  // Prefab Card
  emp::prefab::Card first_card("INIT_OPEN");
  doc << first_card;
  first_card.AddHeaderContent("Welcome to your first prefab card!");
  first_card.AddBodyContent("What will you create next?");
  std::cout << "Hello, console!" << std::endl;
  
  emp::prefab::CloseLoadingModal();
  return example();
}
