// vl_app.cpp
// calculates factorials of larger numbers using verylong class
#include "verlong.h"                            // verylong header file

int main()
{
    unsigned long numb, j;
    verylong fact = 1;                          // initialize verylong

    cout << "\nEnter number: ";
    cin >> numb;                                // input a long int

    for (int i = numb; i > 0; i--)              // factorial is numb * numb-1 * numb-2 * numb-3 and so on
        fact = fact * i;
    
    cout << "Factorial is "; fact.putvl();          // display factorial
    cout << endl;
    return 0;
}
