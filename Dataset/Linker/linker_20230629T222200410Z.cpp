// incompatible_types_class.cpp
#include <iostream>

// Declaration of class with incompatible types
class IncompatibleTypesClass {
public:
    void printNumber(int number) {
        std::cout << "Number: " << number << std::endl;
    }
};

int main() {
    // Create an object of the class with incompatible types
    IncompatibleTypesClass obj;
    
    // Call the method with incompatible argument type
    obj.printNumber("Hello");
    return 0;
}
