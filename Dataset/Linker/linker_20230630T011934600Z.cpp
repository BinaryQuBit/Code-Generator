int main() {
    int* ptr = new int;
    *ptr = 10;
    delete ptr;
    int val = *ptr;
    return 0;
}
