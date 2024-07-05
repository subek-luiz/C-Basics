// cardobje.cpp
// cards as objects
#include <iostream>
using namespace std;

enum Suit {clubs, diamonds, hearts, spades};

const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;


class Card
    {
        private:
            int num;
            Suit suit;
        public:
            Card()
                {}
            Card(int num, Suit s) : num(num), suit(s)
                {}
            void showcard();
            bool isequal(Card);
    };

void Card::showcard()
    {
        if (num >=2 && num <=10)
            cout << num << " of ";
        else
            switch (num)
                {
                case jack: cout << "jack of "; break;
                case queen: cout << "queen of "; break;
                case king: cout << "king of "; break;
                case ace: cout << "ace of"; break;
                }
        
        switch (suit)
            {
            case clubs: cout << "clubs";  break;
            case diamonds: cout << "diamonds"; break;
            case hearts: cout << "hearts";  break;
            case spades: cout << "spades";  break;
            }    
    }

bool Card::isequal(Card c)
    {
        return (num == c.num && suit == c.suit) ? true : false;      
    }

int main()
{
    Card prize,temp,chosen;
    int position;

    Card card1(7, spades);
    cout << "\nCard1 is "; card1.showcard();

    Card card2(jack, hearts);
    cout << "\nCard2 is "; card2.showcard();

    Card card3(queen, diamonds);
    cout << "\nCard3 is "; card3.showcard();

    prize = card3;

    cout << "\nI'm swapping Card1 and Card3";
    temp = card3; card3 = card1; card1 = temp;

    cout << "\nI'm swapping Card 2 and Card3";
    temp = card3; card3 = card2; card2 = temp;

    cout << "\nI'm swapping Card 1 and Card 2";
    temp = card2; card2 = card1; card1 = temp;

    cout << "\nNow, Guess the position of  "; prize.showcard(); cout << "(1/2/3): ";
    cin >> position;

    switch (position)
        {
            case 1: chosen = card1; break;
            case 2: chosen = card2; break;
            case 3: chosen = card3; break;
        }

    if (chosen.isequal(prize))
        cout << "Thats correct. You guessed it right" << endl;
    else
        cout << "Better luck next time" << endl;

    cout << "You chose the "; chosen.showcard();
    cout << endl; 

    return 0;
}

