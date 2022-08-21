#include <stdio.h>


struct Rectangle {
    int width;
    int height;
};

int areaOfRectangle(struct Rectangle r);

int main() {
    struct Rectangle rect1 = {10, 5};
    int rect1Area = areaOfRectangle(rect1);

    printf("width: %d\theight: %d\n", rect1.width, rect1.height);
    printf("Rect area: %d\n", rect1Area);
    
    return 0;
}

int areaOfRectangle(struct Rectangle r) {
    return r.height * r.width;
}
