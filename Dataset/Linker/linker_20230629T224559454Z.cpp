class MyClass {
  friend MyClass operator+(const MyClass&, const MyClass&);
};

MyClass operator+(const MyClass& obj1, const MyClass& obj2) {
  return MyClass();
}

MyClass operator+(const MyClass& obj1, const MyClass& obj2) {
  return MyClass();
}

int main() {
  MyClass obj1, obj2;
  MyClass result = obj1 + obj2;
  return 0;
}
