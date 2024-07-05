// englcon.cpp
// constructors, adds objects using member functions
#include <iostream>
using namespace std;

class Distance
    {
        private:
            int feet;
            float inches;
        public:
            Distance() : feet(0), inches (0.0)                  // no argument constructor   
                {}             
            Distance(int ft, float in) : feet(ft), inches(in)   // two argument constructor
                {}
            void getDistance()                                  // get lenght from the user
                {
                    cout << "Enter feet: ";
                    cin >> feet;
                    cout << "Enter inches: ";
                    cin >> inches;
                }
            void showDistance()                                 // display distance
                {
                    cout << feet << "\'-" << inches << "\''";
                }
            void add_dist(Distance, Distance);                  // declaration
    };

void Distance::add_dist(Distance d1, Distance d2)
    {
        feet = d1.feet + d2.feet;
        inches = d1.inches + d2.inches;

        if (inches > 12)
            {
                feet++;
                inches -= 12;
            }
        
    }

int main()
{
    Distance dist2, dist3;
    Distance dist1(5, 10.2);

    dist2.getDistance();
    dist3.add_dist(dist1, dist2);

    cout << "\ndist1= "; dist1.showDistance();
    cout << "\ndist2= "; dist2.showDistance();
    cout << "\ndist3= "; dist3.showDistance();
    cout << endl; 

    return 0;
}
