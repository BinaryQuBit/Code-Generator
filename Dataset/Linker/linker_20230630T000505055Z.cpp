int main() {
  int x = 5;
  int& ref = x;
  delete &ref;
  return 0;
}