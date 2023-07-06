// MyClassA.h
#pragma once
#include "MyClassB.h"

class MyClassA {
public:
    MyClassB b;
};

// MyClassB.h
#pragma once
#include "MyClassA.h"

class MyClassB {
public:
    MyClassA a;
};
// Error: Circular dependency between `MyClassA.h` and `MyClassB.h`

