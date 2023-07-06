// File1.cpp
#include "File2.h"
void foo() {
    bar();
}

// File2.h
#pragma once
void bar() {
    foo();
}

