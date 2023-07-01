#include <iostream>
#include <fstream>

int main() {
    std::ifstream file("nonexistent.txt");

    if (!file) {
        throw std::runtime_error("Failed to open file");
    }

    file.close();

    return 0;
}
