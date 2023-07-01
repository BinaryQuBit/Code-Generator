#include <iostream>

int main() {
  int size = -10;
  int* arr = new int[size];
  delete[] arr;
  return 0;
}
