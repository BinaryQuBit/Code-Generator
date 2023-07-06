// File 1.cpp
extern int sharedVariable;  // Declaration

// File 2.cpp
int main()
{
    sharedVariable = 10;  // Use of sharedVariable without definition
    return 0;
}
