// ref.cpp
// demonstrates passing by reference
#include <iostream>
using namespace std;

void convert2real(float, float&, float&);

int main()
{
    float rnum,intp,fracp;
    cout << "Enter a real number: ";
    cin >> rnum;
    convert2real(rnum, intp, fracp);

    cout << "Real number: " << rnum << endl;
    cout << "Integer part: " << intp << endl;
    cout << "Fraction part: " << fracp << endl;

    return 0;
}

void convert2real(float r, float& intp, float& fracp)
{
    long temp = static_cast<long>(r);
    intp = static_cast<float>(temp);
    fracp = r - intp;
}


