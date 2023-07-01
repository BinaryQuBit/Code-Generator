#include <iostream>
#include <string>

int main() {
  std::string* str = new std::string("Hello");
  delete str;
  std::cout << *str << std::endl;
  return 0;
}
