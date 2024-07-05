// employ2.cpp
// miltiple levels of inheritance
#include <iostream>
using namespace std;

const int LEN = 80;              // maximum length of names

class employee
{
    private:
        char name[LEN];
        int number;
    public:
        void get_data()
        {
            cout << "Enter Name: "; cin >> name;
            cout << "Enter Number: "; cin >> number; 
        }
        void show_data() const
        {
            cout << "\nName: " << name;
            cout << "\nNumber: " << number;
        }
};

class manager : public employee
{
    private:
        char title[LEN];
        double dues;
    public:
        void get_data()
        {
            employee::get_data();
            cout << "Enter title: "; cin >> title;
            cout << "Enter dues: "; cin >> dues;
        }
        void show_data() const
        {
            employee::show_data();
            cout << "\nTitle: " << title;
            cout << "\nClub dues: " << dues;
        }
};

class scientist : public employee
{
    private:
        int pub;
    public:
        void get_data()
        {
            employee::get_data();
            cout << "Enter the number of publications: "; cin >> pub;
        }
        void show_data()
        {
            employee::show_data();
            cout << "\nNo of publications: " << pub;
        }
};

class laborer : public employee
{
};

class foreman : public laborer
{
    private:
        float quotas;
    public:
        void get_data()
        {
            laborer::get_data();
            cout << "Enter quotas: "; cin >> quotas;
        }
        void show_data()
        {
            laborer::show_data();
            cout << "\nQuotas: " << quotas;
        }
};

int main()
{
    laborer l1;
    foreman f1;

    cout << "Enter data for laborer 1: \n"; l1.get_data(); cout << endl;
    cout << "Enter data for foreman 1: \n"; f1.get_data(); cout << endl;

    cout << "\nData on laborer 1: "; l1.show_data(); cout << endl;
    cout << "\nData on foreman 1: "; f1.show_data(); cout << endl;

    return 0;
} 
