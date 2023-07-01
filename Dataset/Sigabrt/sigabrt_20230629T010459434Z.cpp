#include <iostream>
#include <fstream>

int main() {
    std::ifstream file("nonexistent.txt");
    if (!file.is_open()) {
        std::cerr << "Failed to open file" << std::endl;
        return 1;
    }
    return 0;
}
