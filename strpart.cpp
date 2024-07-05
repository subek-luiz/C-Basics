// strpart.cpp
// string used in widget part object
#include <iostream>
#include <cstring>
using namespace std;

class Part
{
    private:
        char partname[30];
        int partnumber;
        double cost;
    public:
        void setpart(const char pname[], int pnum, double price)
            {
                strcpy(partname, pname);
                partnumber = pnum;
                cost = price;
            }
        void showpart()
            {
                cout << "Partname: " << partname << '\t';
                cout << "Partnumber: " << partnumber << '\t';
                cout << "Cost: $" << cost << '\n';
            }
};

int main()
{
    Part p1, p2;

    p1.setpart("Air Filter", 001, 800.25);
    p2.setpart("Mobil", 002, 2550.50);

    cout << "First part: \n"; p1.showpart();
    cout << "Second part: \n"; p2.showpart();

    cout << endl;

    return 0;
}

