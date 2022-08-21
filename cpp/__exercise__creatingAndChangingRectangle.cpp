#include <iostream>

using namespace std;


struct Rectangle {
    int height;
    int width;
};

void initRectangle(Rectangle &r, int h, int w);
void getRectangleArea(Rectangle r);
void changeRectangleWidth(Rectangle &r, int w);
void changeRectangleHeight(Rectangle &r, int h);

int main() {
    Rectangle rect;
    initRectangle(rect, 10, 20);
    getRectangleArea(rect);

    changeRectangleHeight(rect, 100);
    getRectangleArea(rect);

    changeRectangleWidth(rect, 200);
    getRectangleArea(rect);

    return 0;
}    

void initRectangle(Rectangle &r, int h, int w) {
    r.height = h;
    r.width = w;
}

void getRectangleArea(Rectangle r) {
    int area = r.height * r.width;
    cout << "Area: " << area << endl;
}

void changeRectangleWidth(Rectangle &r, int w) {
    r.width = w;
}

void changeRectangleHeight(Rectangle &r, int h) {
    r.height = h;
}