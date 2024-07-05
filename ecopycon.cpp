// ecopycon.cpp
// initialize objects using default copy constructor
#include <iostream>
using namespace std;

class Distance
    {
        private:
            int feet;
            float inches;
        public:
            Distance() : feet(0), inches(0)
                {}
            Distance(int ft, float in) : feet(ft), inches(in)
                {} 
            void getdistance()
                {
                    cout << "Enter feet: "; cin >> feet;
                    cout << "Enter inches: "; cin >> inches;
                }
            void showdistance()
                {
                    cout << feet << "\'-" << inches << "''\n";
                }
    };

int main()
{
    Distance dist1;
    Distance dist2(5, 8.9);
    Distance dist3;
    Distance dist4 = dist2;

    dist3.getdistance();

    cout << "dist1 = "; dist1.showdistance();
    cout << "\ndist2 = "; dist2.showdistance();
    cout << "\ndist3 = "; dist3.showdistance();
    cout << "\ndist4 = "; dist4.showdistance();
    
    return 0;
}




