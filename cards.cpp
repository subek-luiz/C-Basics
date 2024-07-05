// cards.cpp
// demonstrates structures using playing cards
#include <iostream>
using namespace std;

// define global variables
const int clubs = 0;
const int diamond = 1;
const int hearts = 2;
const int spades = 3;

const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

struct Card
{
    int number; // 2 to 10, jack, queen, king, ace
    int suit; // clubs, diamond, hearts, spades
};

int main()
{
    Card temp, prize, chosen;
    int position;

    Card c1 = { 7, clubs};
    cout << "Card 1 is 7 of clubs\n";

    Card c2 = {ace,diamond};
    cout << "Card 2 is ace of diamond\n";

    Card c3 = {queen, hearts};
    cout << "Card 3 is queen of hearts\n";

    prize = c3;

    cout << "First I will exchange card 1 and card 3\n";
    temp = c3; c3 = c1; c1 = temp;

    cout << "Second I will swap card 2 and card 3\n";
    temp = c3; c3 = c2; c2 = temp;

    cout << "Lastly I'm swapping card 1 and card 2\n";
    temp = c2; c2 = c1; c1 = temp;

    cout << "So, where (1, 2, or 3) is the queen of hearts? ";
    cin >> position;

    switch (position)
    {
    case 1: chosen = c1; break;
    case 2: chosen = c2; break;
    case 3: chosen = c3; break;
    }

    if (chosen.number == prize.number && chosen.suit == prize.suit)
    {
        cout << "You'r the winner!!!!!!\n";
    }
    else
        cout << "Better luck next time";
    
    return 0;
}

