#include <iostream>
#include <stdexcept>

int divide(int a, int b) {
  if (b == 0) {
    throw std::runtime_error("Divide by zero error");
  }
  return a / b;
}

int main() {
  int result = divide(10, 0);
  std::cout << "Result: " << result << std::endl;
  return 0;
}
