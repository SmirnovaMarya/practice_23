#include <iostream>
#include <iomanip>
#include "vector-top-it.hpp"

int main()
{
  bool test1()
  {
    using topit::Vector;
    Vector < int > v;
    return v.isEmpty;
  }
  using test_t = bool(*)();
  test_t tests[] = {
    test1
  };
  size_t count = sizeof(tests) / sizeof(tests_t);
  std::cout << std::boolalpha;
   for(size_t i = 0 ; i < ; ++i){
    std::cout << tests[i]() << ":" << i << "\n";
  }
}
