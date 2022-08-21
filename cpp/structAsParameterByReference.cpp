#include <iostream>

using namespace std;

struct Rectangle {
    int height;
    int width;
};

void doubleRect(Rectangle &rect);

int main() {
    Rectangle rect1 = {5, 10};
    doubleRect(rect1);
    
    cout << "width: " << rect1.height << endl;
    cout << "height: " << rect1.width << endl;

    return 0;
}

void doubleRect(Rectangle &rect) {
    rect.height = rect.height * 2;
    rect.width = rect.width * 2;
}