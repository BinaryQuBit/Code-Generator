#include <iostream>

int main() {
  int* ptr = nullptr;
  int value = *ptr;
  std::cout << "Value: " << value << std::endl;
  return 0;
}
