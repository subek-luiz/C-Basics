// templist2.cpp
// implemetns linked list as template (practice)
#include <iostream>
using namespace std;
const int MAX = 80;
///////////////////////////////////////////////////////////////////////////
template <class Type>
struct link
{
    Type data;              // data item
    link* next;             // pointer to the next link
};
///////////////////////////////////////////////////////////////////////////
template <class Type>
class linklist
{
    private:
        link<Type>* first;          // pointer to first link
    public:
        linklist();                 // no-arg constructor
        void additem(Type d);       // add data to the link
        void display();             // display all items in the link
};
///////////////////////////////////////////////////////////////////////////
template <class Type>
linklist<Type>::linklist()          // no-arg constructor
{
    first = NULL;
}
//-------------------------------------------------------------------------
template <class Type>
void linklist<Type>::additem(Type d)        // add data item
{
    link<Type>* newlink = new link<Type>;         // make a new link
    newlink->data = d;                      // give it data
    newlink->next = first;                  // it points to next link
    first = newlink;                        // now first points to this
}
//-------------------------------------------------------------------------
template <class Type>
void linklist<Type>::display()              // display all links
{
    link<Type>* current = first;            // set ptr to first link
    while (current != NULL)                 // quit on last link
    {
        cout << endl << current->data;     // print data
        current = current->next;            // moce to next link
    }
}
///////////////////////////////////////////////////////////////////////////
int main()
{
    linklist<double> ld;            // ld is object of class linklist<double>

    ld.additem(1231.12);
    ld.additem(2132.123);
    ld.additem(42511.23);

    ld.display();

    linklist<char> lch;             // olch is object of class linklist<char>

    lch.additem('a');
    lch.additem('b');
    lch.additem('c');

    lch.display();

    cout << endl;
    return 0;
}

