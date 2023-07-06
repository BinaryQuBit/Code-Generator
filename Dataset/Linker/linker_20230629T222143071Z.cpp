// multiple_definitions_class.cpp
#include <iostream>

// Definition of class
class MultipleDefinitionsClass {
public:
    void printMessage() {
        std::cout << "Hello, world!" << std::endl;
    }
};

// Another definition of the same class
class MultipleDefinitionsClass {
public:
    void printMessage() {
        std::cout << "Greetings!" << std::endl;
    }
};

int main() {
    // Create an object of the class with multiple definitions
    MultipleDefinitionsClass obj;
    obj.printMessage();
    return 0;
}
