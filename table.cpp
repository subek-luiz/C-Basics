// table.cpp
// demonstrates simple function
#include <iostream>
using namespace std;

void starline(); // function declaration

int main()
{
    starline();
    cout << "Datatype \t Range\n";
    starline();
    cout << "char \t -128 to 127" << endl;
    cout << "short \t -32,768 to 32,767" << endl;
    cout << "System dependent" << endl;
    cout << "long \t -2,147,483,648 to 2,147,483,647" << endl;
    starline();
    return 0;
}

void starline() // function definition
{
    for (int i = 0; i < 45; i++)
        cout << '*';
    cout << endl;
}