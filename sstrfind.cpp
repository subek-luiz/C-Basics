// sstrfind.cpp
// finding substrings in string objects
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string s1 = "Hello world!! I am honing my C++ and OOP skills";
    int n;

    n = s1.find("hon");
    cout << "Found hon at: " << n << endl;

    n = s1.find_first_of("o");
    cout << "First of o at: " << n << endl;

    n = s1.find_first_not_of("aeiouAEIOU");
    cout << "First consonant at: " << n << endl;

    return 0;
}
