#include "AnotherExample.h"

class Example {
public:
    AnotherExample obj; // Using incomplete type
};

int main() {
    Example e;
    return 0;
}

