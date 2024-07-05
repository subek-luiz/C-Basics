// englret.cpp
// function returns value of type Distance
#include <iostream>
using namespace std;

class Distance
    {
        private:
            int feet;
            float inches;
        public:
            Distance() : feet(0), inches(0.0)
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
                    cout << feet << "\'-" << inches << "''" << endl;
                }
            Distance adddistance(Distance);
    };

Distance Distance::adddistance(Distance d1)
    {
        Distance temp;
        temp.inches = inches + d1.inches;
        
        if (inches >=12.0)
            {
                temp.feet = 1;
                inches -= 12;
            }

        temp. feet += feet + d1.feet;

        return temp;        
    }

int main()
{
    Distance dist1(4, 11.2);
    Distance dist2(7, 9.5);

    Distance dist3 = dist1.adddistance(dist2);

    cout << "dist1 = "; dist1.showdistance();
    cout << "\ndist2 = "; dist2.showdistance();
    cout << "\ndist3 = "; dist3.showdistance();

    return 0;
}
