#ifndef __MODULE_GREETER_HPP__
#define __MODULE_GREETER_HPP__
#include <string>

namespace qmod {
  class greeter {
  public:
    greeter(const std::string &greeting) : greeting(greeting) {};
    void operator()(const std::string &name);
  private:
    std::string greeting;
  };
}

#endif // __MODULE_GREETER_HPP__
