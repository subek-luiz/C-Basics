// constObj.cpp
// constant Distant objects
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
            Distance(int ft, float in)  :   feet(ft), inches(in)
                {   }
            void get_dist()
                {
                    cout << "Enter feet: "; cin >> feet;
                    cout << "Enter inches: "; cin >> inches;
                }
            void showdistance() const
                {
                    cout << feet << "\'-" << inches << "''\n";
                }
    };

int main()
{
    const Distance football(300,0);
    cout << "Size of football field is: ";  football.showdistance();
    return 0;
}
