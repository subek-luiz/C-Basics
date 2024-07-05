// ptrvar.cpp
// pointers (address varaibles)
#include <iostream>
using namespace std;

// some pointer definitions
// char* cptr;                  pointer to char
// int* ptr;                    pointer to integer
// float* fptr;                 pointer to float
// Distance* distptr;           pointer to user-defined Distance class      
// char* ptr1, * ptr2, * ptr3   three variables of type char 

int main()
{
    int var1 = 11;
    int var2 = 22;

    cout << &var1 << endl
        << &var2 << endl << endl;

    int* ptr;

    ptr = &var1;
    cout << ptr << endl;
    
    ptr = &var2;
    cout << ptr << endl;
    
    return 0;
}
