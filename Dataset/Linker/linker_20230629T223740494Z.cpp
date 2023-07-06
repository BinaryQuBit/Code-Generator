#include <iostream>

extern int add(int a, int b);  // Declaration of the function from the library

int main()
{
    int result = add(3, 4);  // Function call to the library function
    std::cout << "Result: " << result << std::endl;
    return 0;
}

   

