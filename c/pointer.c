#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;
    p = (int *) malloc(5 * sizeof(int));

    free(p); // clear the memory
    return 0;
}
