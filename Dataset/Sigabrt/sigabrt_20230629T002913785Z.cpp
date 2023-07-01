#include <iostream>

int recursiveFunction(int n) {
  if (n == 0) {
    return 0;
  }
  return recursiveFunction(n);
}

int main() {
  recursiveFunction(5);
  return 0;
}
