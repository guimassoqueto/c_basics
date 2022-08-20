#include <iostream>

using namespace std;

struct Rectangle {
    int width;
    int height;
};

int main() {
    Rectangle rect = {10, 5};
    Rectangle *rectPointer = &rect;

    printf("%p", &rect);
    printf("\n");
    printf("%p", rectPointer);
    printf("\n");

    rectPointer->height = 10;
    printf("%d", rectPointer->height);

    return 0;
}