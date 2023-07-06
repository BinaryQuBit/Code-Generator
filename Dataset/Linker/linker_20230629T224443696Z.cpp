class MyClass {
  friend void myFriendFunction();
};

int main() {
  myFriendFunction();
  return 0;
}
