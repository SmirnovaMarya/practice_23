#include "vector-top-it.hpp"
#include <iomanip>
#include <iostream>
bool testDefaultVector()
{
  using  namespace topit;
  Vector < int > v;
  return v.isEmpty();
}

int main()
{
  using test_t = bool(*)();
  test_t tests[] = {

    testDefaultVector
  };
  size_t count = sizeof(tests) / sizeof(test_t);
  std::cout << std::boolalpha;
	for(size_t i = 0 ; i < count; ++i){
    std::cout << tests[i]() << ":" << i << "\n";
  }
}
