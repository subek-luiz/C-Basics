// empcont.cpp
// containership with employees and degrees
#include <iostream>
#include <string>
using namespace std;
////////////////////////////////////////////////////////////////////////////
class student               // educational background
{
    private:
        string school;          // name of school or university
        string degree;          // highest degree earned
    public:
        void getedu()
        {
            cout << "Enter name of school or university: ";
            cin >> school;
            cout << "Enter highest degree earned \n";
            cout << "(Highschool, Bachelor's, Master's, PHD): ";
            cin >> degree;
        }
        void showedu() const
        {
            cout << "\nSchool or University: " << school;
            cout << "\nHighest degree earned: " << degree;
        }
};
////////////////////////////////////////////////////////////////////////////
class employee
{
    private:
        string name;
        unsigned long number;
    public:
        void getdata()
        {
            cout << "Enter last name: ";
            cin >> name;
            cout << "Enter employee number: ";
            cin >> number;
        }
        void showdata() const
        {
            cout << "\nName: " << name;
            cout << "\nNumber: " << number;
        }
};
////////////////////////////////////////////////////////////////////////////
class manager
{
    private:
        string title;
        double dues;
        student stu;                    // object of class student
        employee emp;                   // object of class employee
    public:
        void getdata()
        {
            emp.getdata();
            cout << "Enter title: "; cin >> title;
            cout << "Enter golf club dues: "; cin >> dues;
            stu.getedu();
        }
        void showdata()
        {
            emp.showdata();
            cout << "\nTitle: " << title;
            cout << "\nGolf club dues: " << dues;
            stu.showedu();
        }
};
/////////////////////////////////////////////////////////////////////////////////
class scientist
{
    private:
        int pub;
        employee emp;
        student stu;
    public:
        void getdata()
        {
            emp.getdata();
            cout << "Enter number of publications: "; cin >> pub;
            stu.getedu();
        }
        void showdata()
        {
            emp.showdata();
            cout << "\nNumber of Publications: " << pub;
            stu.showedu();
        }
};
///////////////////////////////////////////////////////////////////////////
class laborer
{
    private:
        employee emp;
    public:
        void getdata()
        {
            emp.getdata();
        }
        void showdata()
        {
            emp.showdata();
        }
};
///////////////////////////////////////////////////////////////////////////
int main()
{
    manager m1;
    scientist s1, s2;
    laborer l1;

    cout << endl;
    cout << "Enter data for manager 1: \n";
    m1.getdata();

    cout << "Enter data for scientist 1: \n";
    s1.getdata();

    cout << "Enter data for scientist 2: \n";
    s2.getdata();

    cout << "Enter data for laborer 1: \n";
    l1.getdata();
    
    cout << endl;
    cout << "\nData on manager 1: ";
    m1.showdata();

    cout << endl;
    cout << "\nData on scientist 1: ";
    s1.showdata();

    cout << endl;
    cout << "\nData on scientist 2: ";
    s2.showdata();

    cout << endl;
    cout << "\nData on laborer 1";
    l1.showdata();

    cout << endl;
    return 0;
}
