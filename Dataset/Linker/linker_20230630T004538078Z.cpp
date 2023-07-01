int main() {
    int x = 5;
    int* ptr = nullptr;
    ptr = &x;
    delete ptr;
    return 0;
}
