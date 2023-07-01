#include <iostream>
#include <stdexcept>

int main()
{
    int num = -1;
    if (num < 0)
    {
        throw std::invalid_argument("Invalid argument");
    }
    return 0;
}