//persort.cpp
// sorts person objects using array of pointer
#include <iostream>
#include <string>               // for string class
using namespace std;
/// @brief //////////////////////////////////////////////////////////////////////////
class person                                            // class of persons
{
    protected:
        string name;
    public:
        void setName()
        {   cout << "Enter name: "; cin >> name;    }
        void printName()
        {   cout << endl << name;   }
        string getName()
        {   return name;    }
};
////////////////////////////////////////////////////////////////////////////////////
int main()
{
    void bsort(person**, int);
    person* perptr[100];             // array of pointers to persons
    int n = 0;
    char anymore;
    
    do                                               // put person in array
    {   
        perptr[n] = new person;                     // make new object
        perptr[n]->setName();                       // set person's name
        n++;                                        // count person's name
        cout << "Do you want to add more (y/n)?";   // enter another person?
        cin >> anymore;
    }while (anymore == 'y');                        // quit on n
    
    cout << endl;

    cout << "Unsorted List: \n";                    // print unsorted list
    for (int i = 0; i < n; i++)
    {   perptr[i]->printName(); }
    cout << endl;

    bsort(perptr, n);                               // sort pointers

    cout << endl << "Sorted List: \n";                      // print sorted list
    for (int i = 0; i < n; i++)
    {   perptr[i]->printName();    }

    cout << endl;
    
    return 0;
}                                                   // end main
///////////////////////////////////////////////////////////////////////////////////////
void bsort(person** pp, int n)                      // sort pointers to persons
{
    void order(person**, person**);

    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
        {
            order(pp+i, pp+j);
        }
}
///////////////////////////////////////////////////////////////////////////////////////
void order(person** pp1, person** pp2)                    // sort two pointers
{
    if ((*pp1)->getName() > (*pp2)->getName())
    {
        person* tempptr = *pp1;                             // swap the pointers
        *pp1 = *pp2;
        *pp2 = tempptr;     
    }   
}

