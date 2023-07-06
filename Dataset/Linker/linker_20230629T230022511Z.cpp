// File.cpp
class MyClass {
    friend class MyFriendClass;
};

class MyFriendClass {};

int main() {
    MyClass obj;
    return 0;
}