// parts.cpp
// uses parts inventory to demonstrate structures
#include <iostream>
using namespace std;

////////////////////////// declare the structure

struct part
{
    int modelnumber;    
    int partnumber;
    float cost;
};

////////////////////////// main function

int main()
    {
        part part1;         // define a structure variable

        part1.modelnumber = 4567;
        part1.partnumber = 343;
        part1.cost = 354.5F;            // if F is not written the value is treated as a double which is eventually converted and stored to float variable cost

        cout << "Model: " << part1.modelnumber<< endl;
        cout << "Part: " << part1.partnumber << endl;
        cout << "Cost: " << part1.cost << endl;
        return 0;        
    }