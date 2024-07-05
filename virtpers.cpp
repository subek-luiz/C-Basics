// virtpers.cpp
// virtual function with person class
#include <iostream>
using namespace std;
const int LEN = 80;
////////////////////////////////////////////////////////////////////////
class Person
{
    private:
        char name[LEN];
    public:
        void getName()
        {   cout << "Enter name: "; cin >> name;    }
        void putName()
        {   cout << "Name is: " << name;   }
        virtual void getData() = 0;                     // pure virtual function
        virtual bool isOutstanding() = 0;               // pure virtual function
};
/////////////////////////////////////////////////////////////////////////
class Student : public Person
{
    private:
        float GPA;
    public:
        void getData()
        {
            Person::getName();
            cout << "Enter GPA: "; cin >> GPA;
        }
        bool isOutstanding()
        {
            return (GPA > 3.5) ? true : false;
        }
};
//////////////////////////////////////////////////////////////////////////
class Professor : public Person
{
    private:
        int publications;
    public:
        void getData()
        {
            Person::getName();
            cout << "Enter number of Publications: "; cin >> publications;
        }
        bool isOutstanding()
        {
            return (publications > 100) ? true : false;
        }
};
/////////////////////////////////////////////////////////////////////////////
int main()
{
    Person* persPtr[LEN];
    int n = 0;
    char choice;

    do
    {
        cout << "Enter Student or Professor (s/p): "; cin >> choice;

        if (choice == 's')
            persPtr[n] = new Student;
        else
            persPtr[n] = new Professor;
        
        persPtr[n]->getData();
        n++;

        cout << "Enter another (y/n): "; cin >> choice;
    } while (choice == 'y');

    for (int i = 0; i < n; i++)
    {
        persPtr[i]->putName();
        if ( persPtr[i]->isOutstanding() )
        {
            cout << "\nThis person is outstanding\n";
        }   
    }

    return 0;
}

