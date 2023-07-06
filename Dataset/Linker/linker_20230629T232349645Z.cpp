#include <iostream>

struct alignas(16) AlignedStruct {
    int a;
};

int main() {
    alignas(32) int alignedVar;  // Error: Mismatched alignment specifiers
    AlignedStruct alignedStruct;
    alignedVar = alignedStruct.a;
    std::cout << alignedVar << std::endl;
    return 0;
}
