#include <stdio.h>


struct Rectangle {
    int height;
    int width;
};

void initRectangle(struct Rectangle *r, int h, int w);
void getRectangleArea(struct Rectangle r);
void changeRectangleWidth(struct Rectangle *r, int w);
void changeRectangleHeight(struct Rectangle *r, int h);

int main() {
    struct Rectangle rect;
    initRectangle(&rect, 10, 20);
    getRectangleArea(rect);

    changeRectangleHeight(&rect, 100);
    getRectangleArea(rect);

    changeRectangleWidth(&rect, 200);
    getRectangleArea(rect);

    return 0;
}    

void initRectangle(struct Rectangle *r, int h, int w) {
    r->height = h;
    r->width = w;

    return;
}

void getRectangleArea(struct Rectangle r) {
    int area = r.height * r.width;
    printf("Area: %d\n", area);

    return;
}

void changeRectangleWidth(struct Rectangle *r, int w) {
    r->width = w;

    return;
}

void changeRectangleHeight(struct Rectangle *r, int h) {
    r->height = h;

    return;
}