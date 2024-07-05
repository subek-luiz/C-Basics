#include<iostream>
using namespace std;

const int SIZE = 5;

// Function to double each element of the array
void doubleArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] *= 2; // Doubling each element
    }
}

// Function to display the array
void displayArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int numbers[SIZE] = {1, 2, 3, 4, 5};

    cout << "Original array: ";
    displayArray(numbers, SIZE);

    // Passing the array to doubleArray function
    doubleArray(numbers, SIZE);

    cout << "Array after doubling elements: ";
    displayArray(numbers, SIZE);

    return 0;
}