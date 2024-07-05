// strequal.cpp
// overload '==' operator compares strings
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
        { str[0]='\0'; }
        String(char s[])
        { strcpy(str, s); }
        void getstr()
        { cin.get(str,MAX);  }
        void display() const
        { cout << str; }
        bool operator == (String) const;
};

bool String::operator == (String ss) const
{
    return (strcmp(str, ss.str) ==0) ? true: false;
}

int main()
{
    String s1 = "yes";
    String s2 = "no";
    String s3;

    cout<< "Enter yes/no: "; s3.getstr();

    if (s3 == s1)
        cout << "You typed yes";
    else if (s3 == s2)
        cout << "You typed no";
    else
        cout << "You didn't follow instructions\n";
      
    return 0;
}

