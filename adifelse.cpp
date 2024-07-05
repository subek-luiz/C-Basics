// adifelse.cpp
// demonstrates IF.....ELSE with adventure program
#include <iostream>
#include <conio.h>
using namespace std;

int main()
    {
        int x = 10, y = 10;
        char dir = 'a';
        cout << "Let's play a game" << endl;
        cout << "Type Enter to quit" << endl;

        while (dir != '\r') 
        {
            cout << "Your location is " << x << " , " << y << endl;
            cout << "Enter the direction key (e/w/n/s): ";
            dir = getch();

            if (dir == 'n')         // go north
                y--;
            else if (dir == 's') // go south
                y++;
            else if (dir == 'e') // go east
                x++;
            else if (dir == 'w') // go west
                x--;
        }

        return 0;
        
    }