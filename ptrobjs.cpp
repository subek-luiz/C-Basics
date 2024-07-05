// ptrobjs.cpp
// array of pointers to objects
#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////
class Person
{
    private:
        char name[40];
    public:
        void setName()
        {
            cout << "Enter name: ";
            cin >> name;
        }
        void printName()
        {
            cout << "\n Name is: " << name;
        }
};
//////////////////////////////////////////////////////////////////////
int main()
{
    Person* perptr[100];
    int n = 0;
    char choice;

    do
    {
        perptr[n] = new Person;                     /// make new object
        perptr[n]->setName();
        n++;
        cout << "Enter another (y/n)?";
        cin >> choice;
    } while (choice == 'y');

    for (int j = 0; j < n; j++)
    {
        cout << "\nPerson number " << j+1 <<" ";
        perptr[j]->printName();
    }
    
    cout << endl;
       
    return 0;
}
