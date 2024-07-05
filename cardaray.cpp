// cardaray.cpp
// cards as objects
#include <iostream>
#include <cstdlib>
#include <ctime>
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
            void set(int n, Suit s)
                { number = n; suit = s; }
            void display();
    };

void Card::display()
    {
        if (number >=2 && number <=10)
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
            case clubs: cout << char(5); break;
            case diamonds: cout << char(4); break;
            case hearts: cout << char (3); break;
            case spades: cout << char(6); break;
            }
    }

int main()
    {
        Card deck[52];

        for (int i = 0; i < 52; i++)
            {
                int num = (i % 13) + 2; // cycles through 2 to 14, 4 times
                Suit su = Suit(i / 13); // cycles through 0 to 3, 13 times
                deck[i].set(num, su); // set card
            }

        cout << "\nOrdered deck:\n";

        for (int j = 0; j < 52; j++)
            {
                deck[j].display();
                cout << "  ";
                if ( ! ( (j + 1) % 13 ) )
                    cout << endl;
            }
     
        

        return 0;
    }
