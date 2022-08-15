#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int &r = a;

    r = 11;
    printf("%d\n", a);

    return 0;
}