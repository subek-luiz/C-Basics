// vararg.cpp
// demonstrates variable arguments
#include <iostream>
using namespace std;

void repchar(char,int);

int main()
{
    char character;
    int repetition;
    cout << "Enter a character: "; cin >> character;
    cout << "Enter number of times to repeat it: "; cin >> repetition;

    repchar(character,repetition);

    return 0;
}

void repchar(char ch, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ch;
    }
    cout << endl;
}
