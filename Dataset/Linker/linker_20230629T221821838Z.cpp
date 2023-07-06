// Circular dependencies

// In this code, we have circular dependencies between two classes,
// resulting in a linker error due to unresolved symbols.

// Compiler will compile this code successfully, but linker will throw an error.

// File: ClassA.h
#ifndef CLASSA_H
#define CLASSA_H

#include "ClassB.h"

class ClassA
{
    ClassB objB;
public:
    void doSomething();
};

#endif

// File: ClassA.cpp
#include "ClassA.h"

void ClassA::doSomething()
{
    objB.doSomething();
}

// File: ClassB.h
#ifndef CLASSB_H
#define CLASSB_H

#include "ClassA.h"

class ClassB
{
    ClassA objA;
public:
    void doSomething();
};

#endif

// File: ClassB.cpp
#include "ClassB.h"

void ClassB::doSomething()
{
    objA.doSomething();
}

// File: main.cpp
#include "ClassA.h"

int main()
{
    ClassA objA;
    objA.doSomething();

    return 0;
}
