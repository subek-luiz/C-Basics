// strconv.cpp
// convert between ordinary string and class string
#include <iostream>
#include <cstring>
using namespace std;

class String
{
    private:
        static const int MAX = 100;
        char str[MAX];
    public:
        String()                        // no argument constructor
        { str[0] = '\0'; }
        String(char s[])                // 1 argument constructor
        { strcpy(str,s); }
        void display()
        {
            cout << str << endl;
        }
        operator char*()
        {
            return str;
        }
};

int main()
{
    char x[] = "This is a statement that says Subek is a computer programming genius.";
    String s1 = x;
    s1.display();

    String s2 = "This statement is in agreement with the above one.";
    s2.display();

    cout << "\bLet's display it as an array of characters.";

    cout << static_cast<char*>(s2);
    
    cout << endl;

    return 0;
}
