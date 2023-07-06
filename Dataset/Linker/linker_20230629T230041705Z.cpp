class MyClass {
public:
    friend class FriendClass;
    friend class FriendClass;  // Second definition
};

class FriendClass {
public:
    void foo() {}
};

int main() {
    MyClass obj;
    FriendClass friendObj;
    friendObj.foo();  // Accessing friend function
    return 0;
}
