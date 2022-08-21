#include <iostream>

using namespace std;


class Rectangle {
    private:

        int height;
        int width;

    public:
        // contructor
        Rectangle(int h, int w) {
            height = h;
            width = w;
        }

        int getArea() {
            int area = height * width;
            return area;
        }

        void changeWidth(int w) {
            width = w;
        }

        void changeHeight(int h) {
            height = h;
        }
};

int main() {
    Rectangle rect(5, 10);
    cout << "Area: " << rect.getArea() << endl;

    rect.changeHeight(10);
    cout << "Area: " << rect.getArea() << endl;

    rect.changeWidth(20);
    cout << "Area: " << rect.getArea() << endl;

    return 0;
}    