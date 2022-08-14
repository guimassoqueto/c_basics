#include <stdio.h>

struct Rectangle {
    int width;
    int height;
};

int main() {
    struct Rectangle rect1, rect2;

    rect1.height = 2;
    rect1.width = 4;

    rect2.height = 3;
    rect2.width = 6;

    struct Rectangle rects[2] = {rect1, rect2};

    printf("size: %ld\nsizeof int: %ld\n\n", sizeof(rect1), sizeof(int));

    for (int i = 0; i < 2; i++) {
        printf("Area: %i", rects[i].height * rects[i].width);
    }
}