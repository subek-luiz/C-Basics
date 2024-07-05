// salemon.cpp
// displays sales chart using 2-d array
#include <iostream>
#include <iomanip>
using namespace std;

const int DISTRICTS = 4;
const int MONTHS = 3;

int main()
{
    int d,m;
    float sales[DISTRICTS][MONTHS];

    for (d = 0; d < DISTRICTS; d++)
        for (m = 0; m < MONTHS; m++)
            {
                cout << "Enter sales for district " << d+1 << ", month " << m+1 << ":";
                cin >> sales[d][m];
            }
    
    cout << endl;

    cout << "                   Months                  \n";
    cout << setw(20) << "1" << setw(10) << "2" << setw(10) << "3";

    for (d = 0; d < DISTRICTS; d++)
        {
            cout << "\nDistrict " << d+1;
            for (m = 0; m < MONTHS; m++)
                {
                    cout << setiosflags(ios::fixed | ios::showpoint) 
                    << setprecision(2) 
                    << setw(10)
                    << sales[d][m];
                }
        }
        cout << endl;

    return 0;
}
