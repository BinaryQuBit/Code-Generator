#include <iostream>

int main() {
  int* ptr = new int[1000000000000000];
  delete[] ptr;
  return 0;
}
