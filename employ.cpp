// employ.cpp
// models employee database using inheritence
#include<iostream>
#include<string>
using namespace std;

class employee                          // employee class
{
    private:
        string name;
        unsigned long number; 
    public:
        void getdata()
        {
            cout << "Enter last name: "; 
            cin.ignore();                   // Discard the newline character in the buffer
            getline(cin,name);
            cout << "Enter number: "; cin >> number;
        }
        void showdata()
        {
            cout << "\nName: " << name;
            cout << "\nNumber: " << number;
        }
};

class manager : public employee
{
    private:
        string title;
        double dues;
    public: 
        void getdata()
        {
            employee::getdata();
            cout << "Enter title: ";
            cin.ignore();                   // Discard the newline character in the buffer
            getline(cin,title);
            cout << "Enter dues: "; cin >> dues;
        }
        void showdata()
        {
            employee::showdata();
            cout << "\nTitle: " << title;
            cout << "\nGolf club dues: " << dues;
        }
};

class scientist : public employee
{
    private:
        int publication;
    public:
        void getdata()
        {
            employee::getdata();
            cout << "Enter number of publications: "; cin >> publication;
        }
        void showdata()
        {
            employee::showdata();
            cout << "\nNumber of publications: " << publication;
        }
};

class laborer : public employee
{

};


int main()
{
    manager m1, m2;
    scientist s1;
    laborer l1;

    cout << endl;

    cout << "Enter data for manager 1: \n";
    m1.getdata();

    cout << "Enter data for manager 2: \n";
    m2.getdata();

    cout << "Enter data for scientist 1: ";
    s1.getdata();

    cout << "Enter data for laborer 1: ";
    l1.getdata(); 

    cout << "\nData on manager 1: ";
    m1.showdata();

    cout << "\nData on manager 2: ";
    m2.showdata();

    cout << "\nData on scientist 1: ";
    s1.showdata();

    cout << "\nData on laborer 1: ";
    l1.showdata();

    cout << endl;
    return 0;
}

