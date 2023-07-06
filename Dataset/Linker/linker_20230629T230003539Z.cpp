// File.cpp
class MyClass {
    friend void myFriendFunction();
};

void myFriendFunction() {}

void myFriendFunction() {}

int main() {
    MyClass obj;
    return 0;
}
