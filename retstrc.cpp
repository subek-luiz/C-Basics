// retstrc.cpp
// demonstrates returning a structure
#include <iostream>
using namespace std;

struct Distance
{
    int feet;
    float inches;
};

Distance addition(Distance, Distance);
void display(Distance);

int main()
{
    Distance d1 = {3,5};
    Distance d2 = {7,10};

    Distance d3 = addition(d1,d2);
    display(d1);
    display(d2);
    display(d3);

    return 0;
}

Distance addition(Distance a, Distance b)
{
    Distance temp;

    temp.feet = 0;

    temp.inches = a.inches + b.inches;
    if ( (a.inches + b.inches) > 12)
    {
        temp.feet++;
        temp.inches -= 12;
    }

    temp.feet += a.feet + b.feet;

    return temp;

}


void display(Distance c)
{
    cout << c.feet << "\'-" << c.inches << endl;
}
