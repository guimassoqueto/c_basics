#include <stdio.h>

int add(int number1, int number2);

int main() {
    int c = add(10, -5);
    printf("%d", c);

    return 0;
}

int add(int number1, int number2) {
    return number1 + number2;
}
