class MyFriendClass {
  // Definition of friend class
};

class MyClass {
  friend MyFriendClass;  // Incorrect declaration of friend class (missing "class" keyword)
};

int main() {
  MyFriendClass obj;
  return 0;
}
