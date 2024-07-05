 // partaray.cpp
 // structure variables as array elements
 #include <iostream>
 #include <iomanip>
 using namespace std;
 const int SIZE = 4;

 struct part
 {
    int modelnumber;
    int partnumber;
    float cost;
 };
 
 int main()
 {
    int i;
    part apart[SIZE];

    for (i = 0; i < SIZE; i++)
        {
            cout << "Enter modelnumber: "; cin >> apart[i].modelnumber;
            cout << "Enter partnumber: "; cin >> apart[i].partnumber;
            cout << "Enter cost: "; cin >> apart[i].cost;
        }

    cout << endl;

    for (i = 0; i < SIZE; i++)
        {
            cout << setw(15) << "Modelnumber: " << apart[i].modelnumber 
                << setw(30) << "Partnumber: "  << apart[i].partnumber
                << setw(40) << "Cost: " << apart[i].cost << endl;
        }
    
    return 0;
 }
 