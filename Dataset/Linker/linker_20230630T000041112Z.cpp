int multiply(int a, int b) {
  return a * b;
}

int main() {
  int (*ptr)(int, int);
  ptr = &multiply;
  int result = multiply(5, 10);
  return 0;
}