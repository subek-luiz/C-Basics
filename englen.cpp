// englen.cpp
// inheritance using English Distances
#include<iostream>
using namespace std;

enum posneg {pos,neg};

class Distance
{
    protected:
        int feet;
        float inches;
    public:
        Distance() : feet(0), inches(0)
        {   }
        Distance(int ft, float inch) : feet(ft), inches(inch)
        {   }
        void get_distance()
        {
            cout << "Enter feet: "; cin >> feet;
            cout << "Enter inches: "; cin >> inches;
        }
        void show_distance()
        {
            cout << feet << "\'-" << inches << "\"";
        }
};

class DistSign: public Distance             // adds sign to Distance
{
    private:
        posneg sign;
    public: 
        DistSign() : Distance()             // no-arg constructor
        { sign = pos;}
        DistSign(int ft, float inch, posneg sg=pos) : Distance (ft,inch)        // 2- or 3-arg contructor
        { sign = sg;}
        void get_distance()
        {
            Distance::get_distance();
            char ch;
            cout << "Enter sign (+ or -): "; cin >> ch;
            sign = (ch == '+') ? pos : neg; 
        }
        void show_distance()
        {
            cout << ((sign == pos) ? "(+)" : "(-)");
            Distance::show_distance();
        }
};

int main()
{
    DistSign alpha;                     // no-arg constructor
    alpha.get_distance();               // get alpha from user

    DistSign beta(11, 6.25);            // 2-arg constructor

    DistSign gamma(100, 5.5, neg);      // 3-arg constructor

    cout << "\nalpha = "; alpha.show_distance();
    cout << "\nbeta = "; beta.show_distance();
    cout << "\ngamma = "; gamma.show_distance();
    cout << endl;

    return 0;
}
