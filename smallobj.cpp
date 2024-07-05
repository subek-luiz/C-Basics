// smallobj.cpp
// demonstrates a small, simple object
#include <iostream>
using namespace std;

// define class

class smallobj          //declare class
{
    private:
        int somedata;      //class data
    public:
        void setdata(int d) // member function to set data
        {somedata = d;}
        void showdata() // member function to display data
        {cout << "The value of somedata is: " << somedata << endl;}
};

int main()
{
    smallobj obj1, obj2;

    obj1.setdata(5);
    obj2.setdata(12);

    obj1.showdata();
    obj2.showdata();

    return 0;
}
