// ptrsort.cpp
// sorts an array using pointers
// bubble sort
#include <iostream>
using namespace std;
//----------------------------------------------------------------------
int main()
{
    void bsort(int*, int);
    const int N = 10;                   // array size
    int arr[N] = {37, 84, 62, 91, 11, 65, 57, 28, 19, 49}; 

    bsort(arr, N);

    for (int i = 0; i < N; i++)
        cout << arr[i] << "\t";
    cout << endl;
    
    return 0;
}
//----------------------------------------------------------------------
void bsort(int* ptr, int n)
{
    void order(int*, int*);
    int j,k;

    for (int j = 0; j < n-1; j++)
        for (int k = j+1; k < n; k++)
            order(ptr+j,ptr+k);
}
//----------------------------------------------------------------------
void order(int* numb1, int* numb2)
{
    if (*numb1 > *numb2)
    {
        int temp = *numb1;
        *numb1 = *numb2;
        *numb2 = temp;
    }
}