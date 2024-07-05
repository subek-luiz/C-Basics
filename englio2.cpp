// englio2.cpp
// overloaded << and >> operators can work with files
#include <fstream>
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////////////
class Distance                 // English Distance class
{
    private:
        int feet;
        float inches;
    public:
        Distance() : feet(0), inches(0.0)   // constructor (no args)
        {   }
        Distance(int ft, float in) : feet(ft), inches(in)
        {   }
        friend istream& operator >> (istream& s, Distance& d);
        friend ostream& operator << (ostream& s, Distance& d);
};
//-----------------------------------------------------------------
istream& operator >> (istream& s, Distance& d)  // get Distance from file or keyboard with overloaded >> operator
{
    char dummy;
    s >> d.feet >> dummy >> dummy >> d.inches >> dummy;
    return s;
}
//-----------------------------------------------------------------
ostream& operator << (ostream& s, Distance& d)  // send Distance to file or screen with overloaed << operator
{
    s << d.feet << "\'-" << d.inches << "\"";
    return s;
}
////////////////////////////////////////////////////////////////////
int main()
{
    char ch;
    Distance dist1;
    ofstream ofile;                     // create ofstream object
    ofile.open("DIST.DAT");             // open output stream
    
    do
    {
        cout << "\nEnter Distance: ";
        cin >> dist1;                   // get distance from user
        ofile << dist1;                 // write it to file DIST.DAT
        cout << "Do another (y/n)?";
        cin >> ch;
    } while (ch != 'n');

    ofile.close();                      // close output stream

    ifstream ifile;                     // create ifstream object
    ifile.open("DIST.DAT");            // input stream

    cout << "\nContents of disk file is:\n";

    while (true)
    {
        ifile >> dist1;                 // read dist from stream
        if (ifile.eof())
            break;
        cout << "Distance = " << dist1 << endl; // display distance
    }

    return 0;
}
