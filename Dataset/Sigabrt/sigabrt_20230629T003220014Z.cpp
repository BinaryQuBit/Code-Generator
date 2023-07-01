#include <iostream>
#include <cstdlib>

int main() {
  int* ptr = static_cast<int*>(malloc(sizeof(int)));
  delete ptr;
  return 0;
}
