// File 1.cpp
template <typename T>
void print(T value);  // Declaration of function template

// File 2.cpp
template <>
void print<int>(int value)  // Specialization for int type
{
    // implementation
}

