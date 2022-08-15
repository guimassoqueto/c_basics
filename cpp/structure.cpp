#include <iostream>

using namespace std;

struct Rectangle {
    int width;
    int height;
};

int main() {
    Rectangle rects[2] = {{2, 3}, {3, 6}};

    printf("sizeof Rectangle: %ld bytes\n\n", sizeof(Rectangle));
    
    for (int i = 0; i < 2; i++) {
        printf("rect %d:\nwidth: %d\nheight: %d\n\n", i, rects[i].width, rects[i].height);
    }
}