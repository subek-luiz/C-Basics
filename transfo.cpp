// transfo.cpp
// uses transform() to change array of inches values to cm
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    double inches[] = {3.5, 6.2, 1.0, 12.75, 4.33};     // array of incehs values
    double centi[5];
    double in_to_cm(double);        // prototype

    transform(inches, inches+5, centi, in_to_cm);       // transfor into array centi[]

    for (int i = 0; i < 5; i++)         // display array centi[]
        cout << centi[i] << ' ';
    
    cout << endl;
    return 0;
}

double in_to_cm(double in)          // convert inches to centimeters
{
    return (in * 2.54);             // return result
}
