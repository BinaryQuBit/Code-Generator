int main() {
  int* ptr = new int[5];
  ptr++;
  delete[] ptr;
  return 0;
}