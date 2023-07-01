#include <iostream>
#include <stdexcept>

int main() {
  try {
    throw std::runtime_error("Runtime error occurred");
  } catch (std::exception& e) {
    std::cout << "Caught an exception: " << e.what() << std::endl;
  }
  return 0;
}
