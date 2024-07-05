// englobj.cpp
// objects using English measurements
#include <iostream>
using namespace std;

class Distance
{
    private:
        int feet;
        float inches;
    public:
        void setDistance(int ft, float in)
        {
            feet = ft;
            inches = in;
        }
        void getDistance()
        {
            cout << "Enter feet: ";
            cin >> feet;
            cout << "Enter inches: ";
            cin >> inches;
        }
        void showDistance()
        {
            cout << feet << "\'-" << inches << "''" << endl;
        }
};

int main()
{
    Distance d1, d2;

    d1.setDistance(10,5.4);
    d2.getDistance();

    cout << "\ndist1 = "; d1.showDistance(); 
    cout << "\ndist2 = "; d2.showDistance(); 
    cout << endl;

    return 0;
}




