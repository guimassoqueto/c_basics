#include <stdio.h>

int * fun (int arraySize) {
    int* arrayPointer;
    arrayPointer = new int[arraySize];

    for (int i = 0; i < arraySize; i++)
    arrayPointer[i] = (i + 1) * 5;

    return arrayPointer;
}

int main() {
    int *pointer, pointerSize = 5;
    pointer = fun(pointerSize);

    for (int i = 0; i < pointerSize; i++) {
        printf("%d", pointer[i]);
    }
    printf("\n");

    return 0;
}