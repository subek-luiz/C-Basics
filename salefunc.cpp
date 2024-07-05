// salesfunc.cpp
// passes array as argument
#include <iostream>
#include <iomanip>
using namespace std;

const int DISTRICTS = 4;
const int MONTHS = 3;

void display(double[DISTRICTS][MONTHS]);

int main()
    {
        double sales[DISTRICTS][MONTHS] = {{123.32, 4363.23, 2342.64},
                                            {423.43, 342.34, 825.34},
                                            {274.86, 342.65, 124.65},
                                            {532.12, 324.12, 534.21}};

        display(sales);
        cout << endl;
        
        return 0;
    }

void display(double funsale[DISTRICTS][MONTHS])
    {
        int d,m;
        cout <<setw(18) << "Months\n";
        cout <<setw(20) << "1" << setw(10) << "2" << setw(10) << "3" << setw(10);
        cout << endl;

        for (d = 0; d < DISTRICTS; d++)
            {
                cout << "District " << d+1; 
                for (m = 0; m < MONTHS; m++)
                    {
                        cout 
                        << setiosflags(ios::fixed | ios::showpoint)
                        << setw(10) 
                        << setprecision(2)
                        << funsale[d][m];
                    }
                cout << endl;
            }
    }
