#include <iostream>
#include <stdexcept>

void processData(int* data) {
  if (data == nullptr) {
    throw std::invalid_argument("Invalid data");
  }
}

int main() {
  int* ptr = nullptr;
  try {
    processData(ptr);
  } catch (const std::exception& e) {
    std::cerr << "Exception caught: " << e.what() << std::endl;
  }
  return 0;
}
