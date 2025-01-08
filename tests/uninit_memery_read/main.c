#include <stdio.h>

void uninitialized_read() {
    int x;
    printf("Uninitialized value: %d\n", x);
}

int main() {
    uninitialized_read();
    return 0;
}
