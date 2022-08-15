#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int *p;
    p = new int[5];

    delete [] p; // clear the memory
    return 0;
}