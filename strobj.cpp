// strobj.cpp
// a string as a class
#include <iostream>
#include <cstring>
using namespace std;

class String
{
    private:
        static const int MAX = 80;
        char str[MAX];
    public:
        String()
            { str[0] = '\0'; }
        String(const char s[])
            { strcpy(str, s); }
        void display()
            { cout << str; }
        void concat(String s2)
            {
                if ((strlen(str)+strlen(s2.str)) < MAX)
                    strcat(str, s2.str);
                else
                    cout << "\nString too long";
            }
};


int main()
{
    String s1("This is a new beginning. ");                 // uses constructor 2
    String s2 = "I am very much enjoying my life.";         // alternative constructor 2
    String s3;                                              // default constructor

    cout << "\nString 1: "; s1.display();
    cout << "\nString 2: "; s2.display();
    cout << "\nString 3: "; s3.display();

    s3 = s1;

    cout << "\nString 3 after copying String 1: "; s3.display(); 

    s3.concat(s2);

    cout << "\nString 3 after concatinating String 1: "; s3.display();
    cout << endl;
    
    return 0;
}

