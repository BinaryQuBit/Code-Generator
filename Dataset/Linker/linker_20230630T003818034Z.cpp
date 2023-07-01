int main() {
    int x;
    int* ptr = &x;
    int y = *ptr;
    delete ptr;
    return 0;
}
