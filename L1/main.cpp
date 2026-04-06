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
	using test_t = bool (*)();
  using case_t = std::pair<test_t, const char *>;
  case_t tests[] = {
      {testDefaultVector, " Default constructed vector must be empty"}
  };
  size_t count = sizeof(tests) / sizeof(test_t);
  std::cout << std::boolalpha;
	{
    std::cout << tests[i].first() << ":" << tests[i].second << "\n";
  }
}

