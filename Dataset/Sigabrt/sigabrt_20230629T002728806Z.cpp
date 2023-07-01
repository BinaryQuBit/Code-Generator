#include <iostream>
#include <string>

void printString(const std::string& str) {
  std::cout << str << std::endl;
}

int main() {
  std::string* ptr = nullptr;
  printString(*ptr);
  return 0;
}
