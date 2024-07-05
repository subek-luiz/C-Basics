// strimem2.cpp
// memory saving string class
// the this pointer in overloaded assignment
#include <iostream>
#include <cstring>
using namespace std;
///////////////////////////////////////////////////////////////////////////
class strCount
{
    private:
        char* str;
        int count;
        friend class String;
    public:
        strCount(char* s)
        {
            int length = strlen(s);
            str = new char[length+1];
            strcpy(str,s);
            count = 1;
        }
        ~strCount()
        {
            delete[] str;
        }
};
////////////////////////////////////////////////////////////////////////////
class String
{
    private:
        strCount* psc;
    public:
        String()                            // no-arg constructor
        {
            psc = new strCount("NULL");
        }
        String(char* s)                     // one-arg constructor
        {
            psc = new strCount(s);
        }
        String(String& S)                   // copy constructor
        {
            cout << "\nCopy Constructor";
            psc = S.psc;
            (psc->count)++;
        }
        ~String()                           // destructor
        {
            cout << "\nDestructor of String class";
            if (psc->count == 1)
                delete psc;
            else
                (psc->count)--;
        }
        void display()
        {
            cout << psc->str;
            cout << "\naddress of psc: " << psc;
        }
        String& operator = (String& S)      // overloaded = operator
        {
            cout << "\nAssignment operator invoked";
            
            if (this == &S)
                return *this;
            
            if (psc->count == 1)
                delete psc;
            else
                (psc->count)--;
            
            psc = S.psc;
            (psc->count)++;

            return *this;
        }
};
//////////////////////////////////////////////////////////////////////////
int main()
{
    String s3 = "When the fox preaches, look to your geese.";
    cout << "\ns3 = "; s3.display();        // display s3

    String s1, s2;                          // define Strings
    s1 = s2 = s3;                           // assign them

    cout << "\ns1 = "; s1.display();        // display s1
    cout << "\ns2 = "; s2.display();        // display s2
    cout << endl;

    return 0;
}
