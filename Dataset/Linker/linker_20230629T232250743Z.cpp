#include <iostream>

// DLL export/import directives
#ifdef _WIN32
    #ifdef MYDLL_EXPORTS
        #define MYDLL_API __declspec(dllexport)
    #else
        #define MYDLL_API __declspec(dllimport)
    #endif
#else
    #define MYDLL_API
#endif

MYDLL_API void someFunction();  // Declaration without definition

int main() {
    someFunction();  // Error: Linker cannot find the definition
    return 0;
}
