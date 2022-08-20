#include <stdio.h>


int swap(int *num1, int *num2) {
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;

    return 0;
}

int main() {
    int a = 1, b = 2;
    printf("a: %d\tb: %d\n", a, b);

    swap(&a, &b);
    printf("a: %d\tb: %d\n", a, b);

    return 0; 
}