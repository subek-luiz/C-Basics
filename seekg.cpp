// seekg.cpp
// seeks particular person in file
#include <fstream>          // for file streams
#include <iostream>
using namespace std;

class Person
{
    private:
        char name[80];
        int age;
    public:
        void getData()
        {
            cout << "\n Enter name: "; cin >> name;
            cout << "\n Enter age: "; cin >> age;
        }
        void showData()
        {
            cout << "\n Name: " << name;
            cout << "\n Age: " << age;
        }
};

int main()
{
    Person pers;

    ifstream infile;
    infile.open("GROUP.DAT", ios::binary | ios::in);

    infile.seekg(0, ios::end);                          // go to 0 bytes from end
    int endposition = infile.tellg();                   // returns the current position in the file
    int n = endposition/sizeof(Person);                 // number of persons
    cout << "\n There are " << n << "persons in file";
    
    cout << "\n Enter person number:";
    cin >> n;
    int position = (n - 1) * sizeof(Person);

    infile.seekg(position);                                 // bytes from start
    infile.read(reinterpret_cast<char*>(&pers), sizeof(pers));
    pers.showData();
    cout << endl;
    
    return 0;
}
