#include <iostream>

#include "greeter.hpp"

void qmod::greeter::operator()(const std::string &name) {
  std::cout << greeting << " " << name << "!\n";
}
