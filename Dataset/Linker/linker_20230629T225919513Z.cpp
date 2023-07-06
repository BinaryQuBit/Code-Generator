// File.cpp
template <typename T>
struct ClassA {
    ClassB<T> b;
};

template <typename T>
struct ClassB {
    ClassA<T> a;
};

int main() {
    ClassA<int> obj;
    return 0;
}

