// temlist2.cpp
// implements linked list as a template
// demonstrates list used with employee class

#include <iostream>
using namespace std;
const int LEN = 80;             // maximum length of names
//////////////////////////////////////////////////////////////////
class employee                  // employee class
{
    private:
        char name[LEN];         // employee name
        unsigned long number;   // employee number
    public:
        friend istream& operator >> (istream& s, employee& e);
        friend ostream& operator << (ostream& s, employee& e);
};
//----------------------------------------------------------------
istream& operator >> (istream& s, employee& e)
{
    cout << "\n Enter last name: "; cin >> e.name;
    cout << "Enter number:"; cin >> e.number;
    return s;
}
//----------------------------------------------------------------
ostream& operator << (ostream& s, employee& e)
{
    cout << "\n Name: " << e.name;
    cout << "\n Number: " << e.number;
    return s;
}
///////////////////////////////////////////////////////////////////
template <class Type>               // struct "link<Type>"
struct link                         // one element of list
{
    Type data;                      // data item
    link* next;                     // pointer to next link
};
///////////////////////////////////////////////////////////////////
template <class Type>               // class "linklist<Type>"
class linklist                      // a list of links
{
    private:
        link<Type>* first;          // pointer to first link
    public:
        linklist()                  // no-argument constructor
        { first = NULL; }           // no first link
        void additem(Type d);       // add data item (one link)
        void display();             // display all links
};
//------------------------------------------------------------------
template <class Type>
void linklist<Type>::additem(Type d)        // add data item
{
    link<Type>* newlink = new link<Type>;       // make a new link
    newlink->data = d;                          // give it data
    newlink->next = first;                      // it points to next link
    first = newlink;
}
//-------------------------------------------------------------------
template <class Type>
void linklist<Type>::display()                  // display all links
{
    link<Type>* current = first;                // set ptr to first link
    while (current != NULL)                     // quit on last link
    {
        cout << endl << current->data;          // display data
        current = current->next;                // move to next link
    }
}
///////////////////////////////////////////////////////////////////////
int main()
{
    linklist<employee> lemp;            // lemp is object of class "linklist<employee>"
    employee emptemp;                  // temporary employee storage
    char ans;                           // user's response ('y' or 'n')

    do
    {
        cin >> emptemp;                 // get employee data from user
        lemp.additem(emptemp);          // add it to linked list 'temp'
        cout << "\nAdd another (y/n)? ";
        cin >> ans;
    } while (ans != 'n');               // when user is done,
    lemp.display();                     // display entire linked list
    cout << endl;
    return 0;
}

