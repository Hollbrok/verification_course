#include <stdlib.h>

void double_free() {
    char *ptr = (char *)malloc(10);
    free(ptr);
    free(ptr);
}

int main() {
    double_free();
    return 0;
}
