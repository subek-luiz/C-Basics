// rewobj.cpp
// person objects do disk I/O
#include <fstream>          // for file streams
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////////////////////
class Person
{
    private:
        char name[40];
        int age;
    public:
        void getData()
        {
            cout << "Enter name: "; cin >> name;
            cout << "Enter age: "; cin >> age;
        }
        void showData()
        {
            cout << "\n Name: " << name;
            cout << "\n Age: " << age; 
        }
        void diskIn(int);          // read from file
        void diskOut();         // write to file
        static int diskCount(); // return number of persons in file
};
//-------------------------------------------------------------------------
void Person::diskIn(int pn)     // read person number pn
{
    ifstream infile;                                // make input stream
    infile.open("PERSFILE.DAT", ios::binary);       // open it
    infile.seekg(pn*sizeof(Person));                // move file ptr                
    infile.read((char*)this, sizeof(*this));        // read one person
}
//--------------------------------------------------------------------------
void Person::diskOut()          // write person to end of file
{
    ofstream outfile;                               // make output stream
    outfile.open("PERSFILE.DAT", ios::binary | ios::app);   // open it
    outfile.write((char*)this, sizeof(*this));       // write to it
}
//--------------------------------------------------------------------------
int Person::diskCount()         // return number of persons
{
    ifstream infile;            // make input stream
    infile.open("PERSFILE.DAT", ios::binary);       // open it
    infile.seekg(0, ios::end);          // go to the last position
    return (int)infile.tellg()/sizeof(Person);      // calculate number of persons
}
/////////////////////////////////////////////////////////////////////////////
int main()
{
    Person p;
    char ch;

    do                                      // save persons to disk
    {
        cout << "Enter data for person:";
        p.getData();
        p.diskOut();
        cout << "Do another (y/n)?: ";
        cin >> ch;
    } while (ch == 'y');

    int n = Person::diskCount();        // how many persons in file?
    cout << "There are " << n << " persons in file\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nPerson " << i;
        p.diskIn(i);                   // read person from disk
        p.showData();                   // display person
    }
    
    cout << endl;
    return 0;
}
