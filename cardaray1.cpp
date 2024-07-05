// cardaray1.cpp
// cards as objects
#include <iostream>
#include <cstdlib> // for srand(), rand()
#include <ctime> // for time for srand()
using namespace std;

enum Suit {clubs, diamonds, hearts, spades};

const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class Card
    {
        private:
            int number;
            Suit suit;
        public:
            Card()
                {   }
            void setcard(int n, Suit s)
                {number = n; suit = s;}
            void display();
    };

void Card::display()
    {
        if ( number >= 2 && number <=10)
            cout << number;
        else
            switch (number)
            {
            case jack: cout << "J"; break;
            case queen: cout << "Q"; break;
            case king: cout << "K"; break;
            case ace: cout << "A"; break;
            }
        
        switch (suit)
            {
            case clubs: cout << "C"; break;
            case diamonds: cout << "D"; break;
            case hearts: cout << "H"; break;
            case spades: cout << "S"; break;
            }
    }

int main()
{
    Card deck[52], temp;

    for (int i = 0; i < 52; i++)
        {
            int num = (i % 13) + 2;
            Suit su = Suit(i/13);
            deck[i].setcard(num, su);
        }
    
    cout << "\nOrder deck:\n";

    for (int j = 0; j < 52; j++)
    {
        deck[j].display();
        cout << "  ";
        if (!((j+1) % 13))
            cout << endl;
    }
    
    srand(time(NULL));

    for (int k = 0; k < 52; k++)
        {
            int r = rand() % 52;
            temp = deck[k];
            deck[k] = deck[r];
            deck[r] = temp;
        }

    cout << "\nShuffled deck: \n";

    for (int l = 0; l < 52; l++)
    {
        deck[l].display();
        cout << "  ";
        if (!((l+1) % 13))
            cout << endl;
    }

    return 0;
}
