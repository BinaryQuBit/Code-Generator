class MyClass {
  int value;
public:
  MyClass(int val) : value(val) {}
  
  int getValue() const {
    return value;
  }
};

MyClass operator+(const MyClass& obj1, const MyClass& obj2) {
  int sum = obj1.getValue() + obj2.getValue();
  return MyClass(sum);
}

int main() {
  MyClass obj1(5);
  MyClass obj2(10);
  MyClass result = obj1 + obj2;
  return 0;
}
