// chcount.cpp
// counts characters and words typed in
#include <iostream>
#include <conio.h>
using namespace std;

int main()
    {
        int chcount = 0;
        int wdcount = 1;
        char ch = 'a';

        cout << "Enter a phrase: ";

        while (ch != '\r')
        {
            ch = getch();
            if (ch == ' ')
                wdcount++;
            else
                chcount++;
        }

        cout << "Total number of words: " << wdcount << endl;
        cout << "Total number of letters: " << chcount-1 << endl;

        return 0;        
    }