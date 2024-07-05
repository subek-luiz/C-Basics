// temlist3.cpp
// implements linked list as a template
// demonstrates list used with employee class

#include <iostream>
using namespace std;
const int MAX = 80;         // maximum length of names
////////////////////////////////////////////////////////////////////////
class employee              // employee class
{
    private:
        char name[MAX];         // employee name
        unsigned long number;   // employee number
    public:
        friend istream& operator >> (istream& s, employee& e);
        friend ostream& operator << (ostream& s, employee& e);
};
//----------------------------------------------------------------------
istream& operator >> (istream& s, employee& e)
{
    cout << "Enter last name: "; cin >> e.name;
    cout << "Enter employee number: "; cin >> e.number;
    return s;
}
//----------------------------------------------------------------------
ostream& operator << (ostream& s, employee& e)
{
    cout << "\nName: " << e.name;
    cout << "\nNumber: " << e.number;
    return s;
}
////////////////////////////////////////////////////////////////////////
template <class Type>               // struct "link<Type>"
struct link                         // one element of list
{
    Type data;                      // data item
    link* next;                     // pointer to next link
};
////////////////////////////////////////////////////////////////////////
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
//----------------------------------------------------------------------
template <class Type>
void linklist<Type>::additem(Type d)
{
    link<Type>* newlink = new link<Type>;       // make a new link
    newlink->data = d;                      // give it data
    newlink->next = first;              // it points to next link
    first = newlink;                    // now first points to this
}
//----------------------------------------------------------------------
template <class Type>
void linklist<Type>::display()          // display all links
{
    link<Type>* current = first;        // set ptr to first link
    while (current != NULL)
    {
        cout << endl << current->data;      // display data
        current = current->next;            // move to next link
    }
}
////////////////////////////////////////////////////////////////////////
int main()
{
    linklist<employee> lemp;    // lemp is an object of class "linklist<employee>"
    employee emptemp;
    char ans;
    do
    {
        cin >> emptemp;         // get employee data from user
        lemp.additem(emptemp);  // add it to linked list 'lemp'
        cout << "\nAdd another (y/n)?";
        cin >> ans;
    } while (ans != 'n');           // when user is done, end loop

    lemp.display();             // display entire linked list
    
    cout << endl;
    
    return 0;
}


