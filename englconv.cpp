// englconv.cpp
// conversions: Distance to meters, meters to distance
#include <iostream>
using namespace std;

class Distance
{
    private:
        int feet;
        float inches;
        float MTF;
    public:
        Distance() : feet(0), inches(0.0), MTF(3.280833F)
        {   }
        Distance(int ft, float inch) : feet(ft), inches(inch), MTF(3.280833F)
        {   }
        Distance(float meters) : MTF(3.280833F)
        {
            float temp = meters * MTF;
            feet = static_cast<int>(temp);
            inches = (temp - feet) * 12;
        }
        void getdistance()
        {
            cout << "Enter feet: "; cin >> feet;
            cout << "Enter inches: "; cin >> inches;
        }
        void showdistance()
        {
            cout << feet << "\'-" << inches << "\"";
        }
        operator float() const;
};

Distance::operator float() const
{
    float temp2 = inches/12;
    temp2 += static_cast<float>(feet);
    return temp2/MTF;
}

int main()
{
    float mt;
    Distance dist1 = 2.35F;
    cout << "\ndist1 = "; dist1.showdistance();

    mt = static_cast<float>(dist1);
    cout << "\ndist1 = " << mt << " meters";

    Distance dist2(5,10.25);
    cout << "\ndist2 = "; dist2.showdistance();

    mt = dist2;
    cout << "\ndist2 = " << mt << " meters";

    return 0;
}
