#include <iostream>

int main() {
  int size = -1;
  int* arr = new int[size];
  delete[] arr;
  return 0;
}
