#include <stdio.h>


struct Rectangle {
    int width;
    int height;
};

void doubleRectangle(struct Rectangle *r);

int main() {
    struct Rectangle rect1 = {10, 5};
    doubleRectangle(&rect1);

    printf("width: %d\theight: %d\n", rect1.width, rect1.height);
    
    return 0;
};

void doubleRectangle(struct Rectangle *r) {
    r->width = r->width * 2;
    r->height = r->height * 2;
}
