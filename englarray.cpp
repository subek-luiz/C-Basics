// englaray.cpp
// objects using Enlgish measurements
#include <iostream>
using namespace std;

class Distance
    {
        private:
            int feet;
            float inches;
        public:
            Distance()  :   feet(0),inches(0.0)
                {   }
            void getdist()
                {
                    cout << "Enter feet: "; cin >> feet;
                    cout << "Enter inches: "; cin >> inches;
                }
            void showdist()
                {
                    cout << feet << "\'-" << inches << "\"";
                }
    };

int main()
{
    Distance dist[100];
    int n =0;
    char ch;

    cout << endl;

    do
    {
        cout << "Enter distance number " << n+1 << "\n";
        dist[n++].getdist();
        cout << "Enter another(y/n)?: "; cin >> ch; 
    } while (ch != 'n' );

    for (int i = 0; i < n; i++)
    {
        cout << "\n Distance number " << i+1 << " is: ";
        dist[i].showdist();
    }
    
    return 0;
}
