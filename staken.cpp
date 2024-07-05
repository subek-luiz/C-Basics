// staken.cpp
// overloading functions in base and derived classes
#include<iostream>
#include<process.h>
using namespace std;

class Stack
{
    protected:
        static const int MAX = 3;
        int st[MAX];
        int top;
    public:
        Stack()
        {   top = -1;   }
        void push(int var)
        {   st[++top] = var;    }
        int pop()
        {   return st[top--];   }
};

class Stack2 : public Stack
{
    public:
        void push(int var)
        {
            if (top >= MAX-1)
               { cout << "Error: Stack is full"; exit(1); }
            Stack::push(var);
        }

        int pop()
        {
            if (top < 0)
               { cout << "Error: Stack is empty\n"; exit(1); }
            
            return Stack::pop(); 
        }
};

int main()
{
    Stack2 s1;

    s1.push(11);            // push some values onto stack
    s1.push(22);
    s1.push(33);

    cout << s1.pop();
    cout << endl << s1.pop();
    cout << endl << s1.pop();
    cout << endl << s1.pop();       // popped more than available
    cout << endl;
    return 0;
}
