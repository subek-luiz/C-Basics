// convert.cpp
// demostrates return values, converts pounds to kg
#include <iostream>
using namespace std;

float convert(float);

int main()
{
    float pounds,kg;
    cout << "Enter your weight in pounds: ";
    cin >> pounds;

    kg = convert(pounds);

    cout << "\nYour weight in Kg is: " << kg << endl;

    return 0;
}

float convert(float p)
{
    float kg = 0.453592 * p;
    return kg;
}
