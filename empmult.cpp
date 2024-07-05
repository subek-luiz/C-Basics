//empmult.cpp
//multiple inheritance with employess and degrees
#include <iostream>
using namespace std;

const int LEN = 80;

class employee
{
    private:
        char name[LEN];
        int number;
    public:
        void get_data()
        {
            cout << "Enter name: "; cin >> name;
            cout << "Enter number: "; cin >> number;
        }
        void show_data()
        {
            cout << "\nName: " << name;
            cout << "\nNumber: " << number;
        }
};

class student
{
    private:
        char school[LEN];
        char degree[LEN];
    public:
        void get_edu()
        {
            cout << "Enter school: "; cin >> school;
            cout << "Enter degree: "; cin >> degree;
        }
        void show_edu()
        {
            cout << "\nSchool: " << school;
            cout << "\nDegree: " << degree;
        }
};

class laborer : public employee
{
};

class scientist : private employee, student
{
    private:
        int pub;
    public:
        void get_data()
        {
            employee::get_data();
            student::get_edu();
            cout << "Enter the number of publications: "; cin >> pub;
        }
        void show_data()
        {
            employee::show_data();
            student::show_edu();
            cout << "\nPublications: " << pub;
        }
};

class manager : private employee, student
{
    private:
        char title[LEN];
        float dues;
    public:
        void get_data()
        {
            employee::get_data();
            student::get_edu();
            cout << "Enter title: "; cin >> title;
            cout << "Enter Golf club dues: "; cin >> dues; 
        }
        void show_data()
        {
            employee::show_data();
            student::show_edu();
            cout << "\nTitle: " << title;
            cout << "\nGolf club dues: " << dues;
        }
};

int main()
{
    manager m1;
    scientist s1, s2;
    laborer l1;

    cout << endl;

    cout << "\nEnter data for manager 1: \n";
    m1.get_data();
    cout << endl;

    cout << "\nEnter data for scientist 1: \n";
    s1.get_data();
    cout << endl;

    cout << "Enter data for scientist 2: \n";
    s2.get_data();
    cout << endl;

    cout << "Enter data for laborer 1: \n";
    l1.get_data();
    cout << endl;

    cout << "\nData on manager 1";
    m1.show_data();
    cout << endl;

    cout << "\nData on scientist 1";
    s1.show_data();
    cout << endl;

    cout << "\nData on scientist 2";
    s2.show_data();
    cout << endl;

    cout << "\nData on laborer 1";
    l1.show_data();
    cout << endl;

    cout << endl;

    return 0;
}
