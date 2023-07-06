class MyFriendClass {
};

class MyClass {
  friend class MyFriendClass;
};

class MyFriendClass {  // Another definition of MyFriendClass
};

int main() {
  MyFriendClass obj;
  return 0;
}
