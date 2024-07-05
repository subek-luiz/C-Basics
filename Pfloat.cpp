// demonstrates floating point varaibles
#include <iostream>
using namespace std;

int main()
    {
        float rad;
        const float PI =3.14159F;

        cout << "Enter radius of circle: ";
        cin >> rad;

        float area = PI*rad*rad;
        cout << "Area of the circle is: " << area << endl;
        return 0;
    }