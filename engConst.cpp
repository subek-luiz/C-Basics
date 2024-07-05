// engConst.cpp
// const member functions and const arguments to member functions
#include <iostream>
using namespace std;

class Distance
    {
        private:
            int feet;
            float inches;
        public:
            Distance() : feet(0), inches(0.0)
                {   }
            Distance(int ft, float in) : feet(ft), inches(in)
                {   }
            void getdistance()
                {
                    cout << "\nEnter feet: "; cin >> feet;
                    cout << "\nEnter inches: "; cin >> inches;
                }            
            void showdistance() const
                {
                    cout << feet << "\'-" << inches << "''\n";
                }
            Distance add_distance (const Distance&) const;
    };

Distance Distance::add_distance(const Distance& d) const
        {
            Distance temp;
            temp.feet = 0;
            temp.inches = inches + d.inches;
            if (temp.inches >= 12)
            {
                temp.feet = 1;
                temp.inches -= 12;
            }
            temp.feet += feet + d.feet;
            return temp;
        }

int main()
{
    Distance dist1, dist3;
    Distance dist2(11, 6.25);

    dist1.getdistance();
    dist3 = dist1.add_distance(dist2);

    cout << "\ndist1 = "; dist1.showdistance();
    cout << "\ndist2 = "; dist2.showdistance();
    cout << "\ndist3 = "; dist3.showdistance();
    cout << endl;

    return 0;
}


    