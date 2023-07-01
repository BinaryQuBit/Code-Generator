#include <iostream>

class Test {
public:
    void doSomething() {
        delete this;
    }
};

int main() {
    Test* test = new Test();
    test->doSomething();
    return 0;
}
