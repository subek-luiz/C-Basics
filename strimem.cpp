// strimem.cpp
// memory saving string class
// overloaded assignment and copy constructor
#include <iostream>
#include <cstring>
using namespace std;
/////////////////////////////////////////////////////////////////////////////
class strCount
{
    private:
        int count;
        char* str;
        friend class String;

        strCount(char* s)                  // one-arg constructor
        {
            int length = strlen(s);
            str = new char[length+1];
            strcpy(str, s);
            count = 1;
        }

        ~strCount()                         // destructor
        { delete[] str; }                    // delete the string
};
/////////////////////////////////////////////////////////////////////////////
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
            psc = S.psc;
            (psc->count)++;
        }
        ~String()                           // destructor
        {
            if (psc->count == 1)
                delete psc;
            else
                (psc->count)--;
        }
        void display()                      // display the String
        {
            cout << psc->str;                // print string
            cout << "\naddress of psc: " << psc;
            cout << endl;
        }
        void operator = (String& S)         // overloading assignment operator
        {
            if (psc->count == 1)
                delete psc;
            else
                (psc->count)--;
            psc = S.psc;
            (psc->count)++;
        }
};  
//////////////////////////////////////////////////////////////////////////////
int main()
{
    String s3 = "When the foxx preaches, look to your geese.";
    cout << "\ns3 = "; s3.display();

    String s1;
    s1 = s3;
    cout << "\ns1 = "; s1.display();

    String s2(s3);
    cout << "\ns2 = "; s2.display();
    cout << endl;
    
    return 0;
}


