// sales. cpp
// averages a week's widget sales (6 days)
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 6;
    double sales[SIZE];

    cout << "Enter widget sales for " << SIZE << "days: ";
    for (int i = 0; i < SIZE; i++)
        cin >> sales[i];
    
    double total = 0;

    for (int j = 0; j < SIZE; j++)
        total += sales[j];

    cout << "The average sales is: " << total/SIZE;     

    return 0;
}
