// File 1.cpp
extern void functionB();  // Declaration of functionB

void functionA()
{
    functionB();
}

// File 2.cpp
extern void functionA();  // Declaration of functionA

void functionB()
{
    functionA();
}
