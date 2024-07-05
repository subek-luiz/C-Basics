// sstrchar.cpp
// accessing characters in string objects
#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    string word;
    char chararray[200];

    cout << "Enter a word or a sentence: "; getline(cin, word);

    int wlen = word.length();

    cout << "One character at a time: \n";

    for (int i = 0; i < wlen; i++)
        cout << word.at(i) << "\t";             // exception if out-of-bounds
         // cout << word[i];                // no warning if out-of-bounds  

    word.copy(chararray, wlen, 0);
    chararray[wlen] = '\0';
    cout << "Array contains: " << chararray << endl;

    return 0;
}
