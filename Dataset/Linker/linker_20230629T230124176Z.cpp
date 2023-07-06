class MyClass {
public:
    friend class FriendClass;
};

class FriendClass {
public:
    void foo(float) {}  // Incompatible parameter type
};

int main() {
    MyClass obj;
    FriendClass friendObj;
    friendObj.foo(42);  // Calling the friend function
    return 0;
}
