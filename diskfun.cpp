// diskfun.cpp
// reads and writes several objects to disk
#include <iostream>
#include <fstream>
using namespace std;
////////////////////////////////////////////////////////////////////////////////
class Person
{
    private:
        char name[80];
        short age;
    public:
        void getData()
        {
            cout << "\nEnter name: "; cin >> name;
            cout << "Enter age: "; cin >> age;
        }
        void showData()
        {
            cout << "\nName: " << name;
            cout << "\nAge: " << age;
        }
};
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    char ch;
    Person pers;        // create person object
    fstream file;       // create input/output file

    file.open("GROUP.DAT", ios::app | ios::out | ios::in | ios::binary);            // open for append data from user to file

    do
    {
        pers.getData();         // get one person's data
        file.write(reinterpret_cast<char*>(&pers), sizeof(pers));           // write to file
        cout << "Enter another person (y/n)?";
        cin >> ch;
    } while (ch == 'y');

    file.seekg(0);          // reset to start of file

    file.read(reinterpret_cast<char*>(&pers), sizeof(pers));

    while (!file.eof())          // quit on EOF
    {
        cout << "\nPerson: ";           // display person
        pers.showData();     
        file.read(reinterpret_cast<char*>(&pers), sizeof(pers));            // read person         
    }

    cout << endl;

    return 0;    
}
