// ipers.cpp
// reads person object from disk
#include <iostream>
#include <fstream>      // for file streams
using namespace std;
///////////////////////////////////////////////////////////////////////////////
class Person
{
    private:
        char name[80];
        short age;
    public:
        void showData()         // display person's data
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};
////////////////////////////////////////////////////////////////////////////////
int main()
{
    Person pers;            // create person object

    ifstream infile("PERSON.DAT", ios::binary);         // create stream
    infile.read(reinterpret_cast<char*>(&pers), sizeof(pers));          // read stream
    
    pers.showData();

    return 0;
}
