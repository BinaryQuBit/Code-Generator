int main() {
  int x;
  int* ptr = &x;
  delete[] ptr;
  return 0;
}