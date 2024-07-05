// foutiter.cpp
// demonstrates ostream_iterator with files
#include <fstream>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
    int arr[] = {11, 21, 31, 41, 51};
    list<int> theList;

    for (int i = 0; i < 5; i++)         // transfer array to list
        theList.push_back(arr[i]);
    
    ofstream outfile("ITER.DAT");       // create file object

    ostream_iterator<int> ositer(outfile, " ");     // iterator

    copy(theList.begin(), theList.end(), ositer);// write list to file
    return 0;
}
