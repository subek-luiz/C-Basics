// dayenum.cpp
// demonstrates enum types
#include <iostream>
using namespace std;

enum days_of_week { Sun, Mon, Tue, Wed, Thu, Fri, Sat };

int main()
{
    days_of_week day1, day2;
    
    day1 = Mon;
    day2 = Thu;

    cout << "day1 is  " << day1 << endl << "day2 is " << day2 << endl;
    cout << "Days in between: " << day2-day1 << endl;
    
    if (day1 < day2)
    {
        cout << day1 << " comes before " << day2 << endl; 
    }
    else
        cout << day2 << " comes before " << day1 << endl;

    return 0;
}
