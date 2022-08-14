#include <stdio.h>

int main() {
    int a[5];

    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    a[3] = 40;
    a[5] = 50;

    printf("size: %ld", sizeof(a) / sizeof(int));
    return 0;
}