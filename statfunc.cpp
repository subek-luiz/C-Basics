// statfunc.cpp
// static functions and ID numbers for objects
#include <iostream>
using namespace std;
/// @brief /////////////////////////////////////////////////////////////////////
class gamma
{
    private:
        static int total;           // total objects of this class
        int id;
    public:
        gamma()                     // no argument constructor
        {
            total++;                // add another object
            id = total;             // id equals current total
        }
        ~gamma()                    // destructor
        {
            total--;
            cout << "Destroying ID number " << id << endl;
        }
        static void showtotal()
        {
            cout << "Total is " << total << endl;
        }
        void showid()               // non-static function
        {
            cout << "ID number is " << id << endl;
        }
};
//--------------------------------------------------------------------------------
int gamma::total = 0;               // definition of total
//////////////////////////////////////////////////////////////////////////////////
int main()
{
    gamma g1;
    gamma::showtotal();

    gamma g2, g3;
    gamma::showtotal();

    g1.showid();
    g2.showid();
    g3.showid();

    cout << "=============================end of the program==============================\n";
    return 0;
}
