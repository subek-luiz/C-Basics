// empl_io.cpp
// performs file I/O on employee objects
// handles different sized objects
#include <iostream>         // for file-stream functions 
#include <fstream>
#include <typeinfo>         // for typeid()
#include <process.h>        // for exit()
using namespace std;

const int LEN = 32;         // maximum length of last names
const int MAXEM = 100;      // maximum number of employees

enum employee_type {tmanager, tscientist, tlaborer};

/// @brief ///////////////////////////////////////////////////////////////////
class employee              // employee class
{
    private:
        char name[LEN];             // employee name
        unsigned long number;       // employee number
        static int n;               // current number of employees
        static employee* arrap[];   // array of pointer to emps
    public:
        virtual void getdata()
        {
            cin.ignore(10,'\n');
            cout << "Enter last name:   "; cin >> name;
            cout << "Enter number: "; cin >> number;
        }
        virtual void putdata()
        {
            cout << "\n Name: " << name;
            cout << "\n Number: " << number;
        }
        virtual employee_type get_type();       // get type
        static void add();                      // add an employee
        static void display();                  // display all employees
        static void read();                     // read from disk file
        static void write();                    // write to disk file
};
//-----------------------------------------------------------------------------
// static variables
int employee::n;                    // current number of employees
employee* employee::arrap[MAXEM];       // array of ptrs to emps

///////////////////////////////////////////////////////////////////////////////
class manager : public employee                        // manager class
{
    private:
        char title[LEN];                // vice-president, etc
        double dues;                    // golf club dues
    public:
        void getdata()
        {
            employee::getdata();
            cout << "Enter title: ";    cin >> title;
            cout << "Enter golf club dues: "; cin >> dues;
        }
        void putdata()
        {
            employee::putdata();
            cout << "\n Title: " << title;
            cout << "\n Golf club dues" << dues;
        }
};

/////////////////////////////////////////////////////////////////////////////////////////
class scientist: public employee                        // scientist class
{
    private:
        int pubs;                                       // number of publications
    public:
        void getdata()
        {
            employee::getdata();
            cout << "Enter number of pubs: "; cin >> pubs;
        }
        void putdata()
        {
            employee::putdata();
            cout << "\n Number of publications: " << pubs;
        }
};
//////////////////////////////////////////////////////////////////////////////////////////
class laborer : public employee                         // laborer class
{
};
//////////////////////////////////////////////////////////////////////////////////////////
void employee::add()                                    // add employee to list in memory
{
    char ch;
    cout << "'m' to add a manager"
            "\n's' to add a scientist"
            "\n'l' to add a laborer"
            "\nEnter selection: ";
    
    cin >> ch;

    switch (ch)
    {
        case 'm': arrap[n] = new manager; break;
        case 's': arrap[n] = new scientist; break;
        case 'l': arrap[n] = new laborer; break;
        default: cout << "\nUnknown employee type\n"; return;
    }

    arrap[n++]->getdata();                     // get employee data from user          // array[n]->getdata() hunu parne hoina ra?

}
//--------------------------------------------------------------------
void employee::display()                       // display all employees
{
    for (int i = 0; i < n; i++)
    {
        cout << (i+1);                         // display number

        switch (arrap[i]->get_type())           // display type
        {
            case tmanager: cout << ".Type: Manager"; break;
            case tscientist: cout << ".Type: Scientist"; break;
            case tlaborer: cout << ".Type: Laborer"; break;
            default: cout << ".Unknown type";
        } 

        arrap[i]->putdata();    // display employee data
        cout << endl;
    }
}
//----------------------------------------------------------------------
employee_type employee::get_type()
{
    if (typeid(*this) == typeid(manager))
        return tmanager;
    else if (typeid(*this) == typeid(scientist))
        return tscientist;
    else if (typeid(*this) == typeid(laborer))
        return tlaborer;
    else
        {   cerr << "\nBad employee type"; exit(1); }
    return tmanager;
}
//-----------------------------------------------------------------------
// write all current memory objects to file
void employee::write()
{
    int size;
    cout << "Writing " << n << "employees.\n";
    ofstream outfile;       // open ofstream in binary
    employee_type etype;    // type of each employee object

    outfile.open("EMPLOY.DAT", ios::trunc | ios::binary);

    if(!outfile)
    {   cout << "\nCan't open file\n"; return;}

    for (int i = 0; i <n ; i++)     // for every employee object
    {
        etype = arrap[i]->get_type();   // get it's type
        outfile.write((char*)&etype, sizeof(etype));

        switch (etype)
        {
            case tmanager: size = sizeof(manager); break;
            case tscientist: size = sizeof(scientist); break;
            case tlaborer: size = sizeof(laborer); break;
        }

        outfile.write(reinterpret_cast<char*>(arrap[i]), size);

        if (!outfile)
        {   cout << "\nCan't write to file\n"; return;}
    }
}
//-----------------------------------------------------------------------
// read data for all employees from file into memory
void employee::read()
{
    int size;                       // size of employee object
    employee_type etype;            // type of employee
    ifstream infile;                // open ifstream in binary
    infile.open("EMPLOY.DAT", ios::binary);
    
    if (!infile)
    {   cout << "\nCan't open file\n"; return;  }

    n = 0;          // no employees in memory yet

    while(true)     // read type of next employee
    {
        infile.read( (char*)&etype, sizeof(etype) );
        
        if (infile.eof())           // quit loop on eof
            break;
        
        if (!infile)                // error reading type
        {   cerr << "Can't read type from file\n"; return; }


        switch (etype)              // make new employee
        {
            case tmanager:
                arrap[n] = new manager;
                size = sizeof(manager);
                cout << "Object of manager created";
                break;
            case tscientist:
                arrap[n] = new scientist;
                size = sizeof(scientist);
                cout << "Object of scientist created";
                break;
            case tlaborer:
                arrap[n] = new laborer;
                size = sizeof(laborer);
                break;
            default:
                cout << "Unknown type in file\n"; return;
        }

        infile.read((char*)arrap[n], size);     // read data from file into it

        if(!infile)                                             // error but not eof
        {
            cout << "\nCan't read data from file\n"; return;
        }

        n++;

    }

        cout << "Reading " << n << "employees\n";
} 

///////////////////////////////////////////////////////////////////////////////
int main()
{
    char ch;
    while (true)
    {

        cout << "'a' -- add data for an employee"
                "\n'd' -- display data for all employees"
                "\n'w' -- write all employee data to file"
                "\n'r' -- read all employee data from file"
                "\n'x' -- exit"
                "\nEnter selection: ";

        cin >> ch;

        switch(ch)
        {
            case 'a':                   // add an employee to list
                employee::add();    break;
            case 'd':                   // display all employees
                employee::display();    break;
            case 'w':                   // write employees to file
                employee::write();  break;
            case 'r':                   // read all employees from file
                employee::read(); break;
            case 'x':                   // exit program
                exit(0);
            default: 
                cout << "\nUnknown command";
        }       // end switch
        
    }       // end while
    
    return 0;
}       // end main()

