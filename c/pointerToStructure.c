#include <stdio.h>

struct Rectangle {
    int height;
    int width;
};

int main() {
    struct Rectangle rect = {10, 5};
    struct Rectangle *p = &rect;

    printf("%p\n", &rect);
    printf("%p\n", p);

    printf("H: %dW: %d", rect.height, rect.width);
    printf("\n");
    printf("H: %dW: %d", (*p).height, (*p).width);
    printf("\n");
    printf("H: %dW: %d", p->height, p->width);
    printf("\n");
}
