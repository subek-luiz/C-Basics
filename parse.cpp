// parse.cpp
// evaluates arithmetic expressions composed of 1-digit numbers
#include <iostream>
#include <cstring>
using namespace std;
const int MAX = 40;
////////////////////////////////////////////////////////////////////////////////////////////
class Stack
{
    private:
        char st[MAX];               // stack: array of character
        int top;
    public:
        Stack()
        {   top = 0; }
        void push(char var)
        {   st[++top] = var;    }
        char pop()
        {   return st[top--];   }
        int gettop()
        {   return top; }
};
////////////////////////////////////////////////////////////////////////////////////////////
class express
{
    private:
        Stack s;                // stack for analysis
        char* pStr;             // array of input string or pointer to input string
        int len;                // length of a input string
    public:
        express(char* str)
        {   pStr = str; 
            len = strlen(pStr);       
        }
        void parse();
        int solve();
};
//-------------------------------------------------------------------------------------------
void express::parse()
{
    char ch;
    char lastval;
    char lastop;

    for (int i = 0; i < len; i++)
    {
        ch = pStr[i];

        if (ch >= '0' && ch <= '9')
            s.push(ch-'0');

        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            if (s.gettop() == 1)
                s.push(ch);
            else
            {
                lastval = s.pop();                      // get previous digit
                lastop = s.pop();                       // get previous operator
                
                // if this is * or / AND last operator was + or -
                if ((ch == '*' || ch== '/') && (lastop == '+' || lastop == '-'))
                {
                    s.push(lastop);
                    s.push(lastval);
                }
                else
                {
                    switch (lastop)
                    {
                    case '+': s.push(s.pop() + lastval); break;
                    case '-': s.push(s.pop() - lastval); break;
                    case '*': s.push(s.pop() * lastval); break;
                    case '/': s.push(s.pop() / lastval); break;
                    default: cout << "\nUnknown oper"; exit(1);
                    } // end switch
                }
                s.push(ch);         // put current op on Stack
            }
        }
        else
        {
            cout << "\nUnknown input character"; exit(1);
        }
    }
}                   // end parse
//----------------------------------------------------------------------
int express::solve()             // remove items from stack
{
    char lastval;               // previous value

    while (s.gettop() > 1)
    {
        lastval = s.pop();

        switch( s.pop() )
        {
            case '+': s.push(s.pop() + lastval); break;
            case '-': s.push(s.pop() - lastval); break;
            case '*': s.push(s.pop() * lastval); break;
            case '/': s.push(s.pop() / lastval); break;
            default: cout << "\nUnknown oper"; exit(1);
        } // end switch
    }   // end while

return int( s.pop() ); 
}   // end solve
////////////////////////////////////////////////////////////////////////
int main()
{
    char* inString = new char[100];
    cout << "Enter arithematic expression that you want to solve: syntax(a+b*c/d----)";
    cin >> inString;

    express e1(inString);
    e1.parse();
    cout << "Final Output: " << e1.solve();
    return 0;
}
