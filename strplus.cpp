// strplus.cpp
// overloaded '+' operator concatenates strings
#include <iostream>
#include <cstring>
using namespace std;

class String
{
    private:
        static const int SZ = 80;
        char str[SZ];
    public:
        String()                        // constructor, no argument
        { strcpy(str, ""); }
        String(char s[])                // constructor, one argument
        { strcpy(str, s); }
        void display()
        { cout << str << endl; }
        String operator + (String ss) const
        {
            String temp;
            if (strlen(str) + strlen(ss.str) < SZ)
            {
                strcpy(temp.str, str);          // copy this string to temp
                strcat(temp.str,ss.str);        // concat the string
            }
            else
            {
                cout << "\nString overflow"; 
                exit(1);
            }
            return temp;
        }
};

int main()
{
    String s1 = "Hello there. ";
    String s2 = "You are one hell of a lucky person. Oh you lucky bastard!!";
    String s3;

    s1.display();
    s2.display();
    s3.display();

    s3 = s1 + s2;

    s3.display();
    cout << endl;
    return 0;
}


