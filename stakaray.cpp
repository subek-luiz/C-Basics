// stakarya.cpp
// a stack as a class
#include <iostream>
using namespace std;

class Stack
    {
        private:
            static const int MAX = 10;
            int st[MAX];
            int top;
        public:
            Stack() : top(0)
                {  }
            void push(int var)
                {  st[++top] = var;    }
            int pop()
                {   return st[top--];}
    };

int main()
{
    Stack s1;

    s1.push(11);
    s1.push(14);
    s1.push(56);

    cout << "1: " << s1.pop() << endl; // 56
    cout << "2: " << s1.pop() << endl; // 14
    cout << "3: " << s1.pop() << endl; // 11

    s1.push(34);
    s1.push(25);

    cout << "4: " << s1.pop() << endl; // 25
    cout << "5: " << s1.pop() << endl; // 34

    return 0;
}
