int main() {
  int x = 5;
  int* ptr = &x;
  delete[] ptr;
  return 0;
}