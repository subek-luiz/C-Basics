// asso_arr.cpp
// demonstrates map used as associative array
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    string name;
    int pop;
                            // array of string object
    string states[] = {"Wyoming", "Colorado", "Nevada", "Montana", "Arizona", "Idaho"};
    int pops[] = {470, 2890, 800, 787, 2718, 944};

    map<string, int, less<string>> mapStates;       // map
    map<string, int, less<string>>::iterator iter;  // iterator

    for (int i = 0; i < 6; i++)
    {
        name = states[i];           // get data from arrays
        pop = pops[i];
        mapStates[name] = pop;      // put it in map
    }

    cout << "Enter state: ";        // get state from user
    cin >> name;
    pop = mapStates[name];          // find populatiom
    cout << "Population: " << pop << ",000\n";

    cout << endl;
                                    // display entire map
    for (iter =mapStates.begin(); iter != mapStates.end(); iter++)
        cout << (*iter).first << ' ' << (*iter).second << ",000\n";

    return 0;
}
