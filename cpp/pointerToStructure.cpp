#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle {
    int height;
    int width;
};

int main() {
    struct Rectangle rect = {10, 5};
    struct Rectangle *p = &rect;

    printf("%p\n", &rect);
    printf("%p\n", p);
}
