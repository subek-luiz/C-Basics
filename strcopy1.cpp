//strcopy1.cpp
// copies a string using a for loop
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[] = "I am Subek. ""Subek is legendary at making on-spot quirky jokes.";

    const int MAX = 200;
    int i;
    char str2[MAX];

    for (i = 0; i < strlen(str1); i++)
        str2[i] = str1[i];
    str2[i] = '\0';

    cout << str2 << endl;

    return 0;
}
