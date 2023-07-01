#include <iostream>

int main() {
  int* ptr = new int[5];
  ptr = nullptr;
  delete[] ptr;
  return 0;
}
