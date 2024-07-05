// opers.cpp
// saves person object to disk
#include <iostream>
#include <fstream>                  // for file streams
using namespace std;

class Person                        // class of person
{
    private:
        char name[80];              // name of a person
        short age;                  // age of a person
    public:
        void getData()
        {
            cout << "Enter name: "; cin >> name;
            cout << "Enter age: "; cin >> age;
        }
};

int main()
{
    Person pers;                    // create a person
    pers.getData();                 // get data for person

    ofstream outfile("PERSON.DAT", ios::binary);        // create ofstream object
    outfile.write(reinterpret_cast<char*>(&pers), sizeof(pers));            // write to it            

    return 0;
}
