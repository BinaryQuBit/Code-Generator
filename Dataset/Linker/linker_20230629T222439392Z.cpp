#include "ExampleB.h"

class ExampleA {
public:
    ExampleB b; // Dependency on ExampleB
};

int main() {
    ExampleA a;
    return 0;
}

