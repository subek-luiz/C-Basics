// emglmult.cpp
// miltiple inheritance with English Distances
#include<iostream>
#include<string>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////
class Type
{
    private:
        string dimensions;
        string grade;
    public:
        Type() : dimensions("N/A"), grade("N/A")
        {   }
        Type(string d1, string g1) : dimensions(d1), grade(g1)
        {   }
        void get_type()
        {
            cout << "Enter nominal dimensions (2x4 etc): ";
            cin >> dimensions;
            cout << "Enter grade (rough, const, etc.): ";
            cin >> grade;
        }
        void show_type()
        {
            cout << "\nDimension: " << dimensions;
            cout << "\nGrade: " << grade;
        }
};
////////////////////////////////////////////////////////////////////////////////////////
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
        void get_distance()
        {
            cout << "Enter feet: "; cin >> feet;
            cout << "Enter inches: "; cin >> inches;
        }
        void show_distance()
        {
            cout << "\nDistance: " << feet << "\'-" << inches << "\"";
        }
};
/////////////////////////////////////////////////////////////////////////////////////////
class Lumber : private Type, private Distance
{
    private:
        int quantity;
        double price;
    public:
        Lumber() : Type(), Distance(), quantity(0), price(0.0)
        {   }
        Lumber(string di, string gr, int ft, float in, int q, double p) : Type(di, gr), Distance(ft, in), quantity(q), price(p)
        {   }
        void get_lumber()
        {
            Type::get_type();
            Distance::get_distance();
            cout << "Enter quantity: "; cin >> quantity;
            cout << "Enter price: "; cin >> price;
        }
        void show_lumber()
        {
            Type::show_type();
            Distance::show_distance();
            cout << "\nQuantity: " << quantity;
            cout << "\nPrice: $" << price;
        }
};
/////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    Lumber siding;                      // constructor (no args)

    cout << "\nSiding data: \n";
    siding.get_lumber();
    cout << endl;

    Lumber studs("2x4", "const", 8, 0.0, 200, 4.45F);  // constructor (6 args)

    cout << "\nSiding: "; siding.show_lumber();
    cout << endl;
    cout << "\nStuds: "; studs.show_lumber();

    cout << endl;

    return 0;
}


