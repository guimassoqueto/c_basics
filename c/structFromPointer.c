#include <stdio.h>

struct Rectangle {
    int width;
    int height;
};

int main() {
    struct Rectangle *pointer;
    pointer = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    
    pointer->height = 10;
    pointer->width = 20;

    return 0;
}