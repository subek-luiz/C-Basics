// partinit.cpp
// demonstrates initialization of structure variables
#include <iostream>
using namespace std;

// define structure
struct part
    {
        int modelnumber;
        int partnumber;
        int cost;
    };

// main fucntion
int main()
    {
        part part1, part2;

        part1.modelnumber = 23432;
        part1.partnumber = 1231124;
        part1.cost = 5433;

        part2 = part1;

        cout << "Values of structure part1 is as follows: " << endl;
        cout << part1.modelnumber << '\t' << part1.partnumber << '\t' << part1.cost << endl;

        cout << "Values of structure part2 is a follows: " << endl;
        cout << part2.modelnumber << '\t' << part2.partnumber << '\t' << part2.cost << endl;

        return 0;
    }