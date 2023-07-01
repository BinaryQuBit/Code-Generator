int main() {
    int* ptr = new int;
    *ptr = 5;
    delete ptr;
    int val = *ptr;
    return 0;
}
