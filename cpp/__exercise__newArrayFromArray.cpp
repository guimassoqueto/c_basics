#include <iostream>

using namespace std;

int * fun (int arraySize, int * array) {
    int * arrayPointer;
    arrayPointer = new int[arraySize];

    for (int i = 0; i < arraySize; i++)
    arrayPointer[i] = array[i] * 2;

    return arrayPointer;
}

int main() {
    int array[] = {5, 10, 15, 20, 25};
    int len = sizeof(array) / sizeof(int);

    int * newArr = fun(len, array);

    for (int i = 0; i < len; i++) {
        cout << newArr[i] << " ";
    }
    cout << endl;

    return 0;
}