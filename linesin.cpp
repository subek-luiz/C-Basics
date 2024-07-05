// linesin.cpp
// reads multiple lines, terminated on '$' character
#include <iostream>
using namespace std;

int main()
{
    const int MAX = 80;
    char str[MAX];

    cout << "Enter a string on multiple line: ";
    cin.get(str, MAX, '$');

    cout << "You entered: " << str << endl;

    return 0;
}

