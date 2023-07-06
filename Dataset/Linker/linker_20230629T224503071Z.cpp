class MyFriendClass;

class MyClass {
  friend class MyFriendClass;
};

int main() {
  MyFriendClass obj;
  return 0;
}
