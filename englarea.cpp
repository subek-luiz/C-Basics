// englarea.cpp
// demonstrates nested structures
#include <iostream>
using namespace std;

//define structures
struct Distance
{
    int feet;
    float inches;
};

struct Room
{
   Distance length;
   Distance breadth;
};

// main function
int main()
{
    Room dining;

    dining.length.feet = 8;
    dining.length.inches = 5;
    dining.breadth.feet = 4;
    dining.breadth.inches = 7;

    Room kitchen = {{13,6.5},{17,3.4}};

    float length = dining.length.feet + dining.length.inches/12;
    float breadth = dining.breadth.feet + dining.breadth.inches/12;

    cout << "Area of the Dining Room is: " << length * breadth << " square feet\n";

    cout << "length of kitchen: " << kitchen.length.feet << "' " << kitchen.length.inches << "''\n";
    cout << "breadth of kitchen: " << kitchen.breadth.feet << "' " << kitchen.breadth.inches << "''\n";

    return 0;
}
