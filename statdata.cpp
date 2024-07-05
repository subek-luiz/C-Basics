// statdata.cpp
// static class data
#include <iostream>
using namespace std;

class Foo
    {
        private:
            static int count;  
        public:
            Foo() 
                {count++;}
            int getcount()
                {return count;}
    };

int Foo::count = 0;

int main()
{
    Foo f1,f2,f3; // creates three objects

    cout << "count is " << f1.getcount() << endl;
    cout << "count is " << f2.getcount() << endl;
    cout << "count is " << f3.getcount() << endl;
    return 0;
}

