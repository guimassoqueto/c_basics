#include <stdio.h>
#include <stdlib.h>


struct Rectangle {
    int height;
    int width;
};

int main() {
    struct Rectangle *p;
    p = (struct Rectangle*) malloc(sizeof(struct Rectangle));

    p->height = 10;
    p->width = 50;

    printf("%p", p);
}