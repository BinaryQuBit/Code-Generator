#include <iostream>

int factorial(int n) {
  if (n < 0) {
    throw std::runtime_error("Factorial of negative number not defined");
  }
  if (n == 0) {
    return 1;
  }
  return n * factorial(n - 1);
}

int main() {
  int result = factorial(-5);
  std::cout << "Factorial: " << result << std::endl;
  return 0;
}
