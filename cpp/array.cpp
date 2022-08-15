#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int array[] = {10,20,30,40,50};
    int array_len = sizeof(array) / sizeof(int);

    for (int i: array) {
        printf("idx: %d, val: %i\n", i);
    }

    return 0;
}