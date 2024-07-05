// inliner.cpp
// demonstrates inline functions
#include <iostream>
using namespace std;

inline float lbstokg(float lbs)
{
    return lbs * 0.453592;
}

int main()
{
    float lbs, kg;
    
    cout << "Enter weights in pounds: ";
    cin >> lbs;

    cout << "The weight in kg is: " << lbstokg(lbs);

    return 0;
}

