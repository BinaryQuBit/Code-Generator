class MyClass {
  friend void myFriendFunction(int);  // Declaration of friend function with int parameter
};

void myFriendFunction(double) {}  // Definition of friend function with double parameter

int main() {
  myFriendFunction(10);
  return 0;
}
