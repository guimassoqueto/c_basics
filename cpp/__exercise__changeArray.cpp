// C++ program to update every array element with
// multiplication of previous and next numbers in array
#include<iostream>
using namespace std;

void changeArray(int * array, int arrayLength);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(int);

    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    printf("\n");

    changeArray(arr, len);
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    printf("\n");

}

void changeArray(int * array, int arrayLength) {
    for (int i = 0; i < arrayLength; i++) {
        array[i] = array[i] * 3;
    }
    return;
}
