// main.cpp
#include <iostream>

union MyUnion {
    struct {
        int x;
        int y;
    } point; // Incomplete type: struct definition is missing

    int values[2];
};

int main() {
    MyUnion u;
    u.point.x = 1;
    u.point.y = 2;

    std::cout << "Point coordinates: " << u.point.x << ", " << u.point.y << std::endl;

    return 0;
}

