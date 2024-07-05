// wdcount.cpp
// demonstrates enums, counts words in phrase
#include <iostream>
#include <conio.h>
using namespace std;

enum itsaword {NO, Yes};

int main()
{
    itsaword isWord = NO;
    char ch = 'a';
    int wordcount = 0;

    cout << "Enter a phrase: ";
    do
    {
        ch = getch();
        if (ch == ' ' || ch == '\r')
        {
            if (isWord == Yes)
            {
                wordcount++;
                isWord = NO;
            }            
        }
        else
            if (isWord == NO)
            {
                isWord = Yes;
            }     
    } while (ch != '\r');
    
    cout << endl << "Word count is: " << wordcount;
    
    return 0;
}


