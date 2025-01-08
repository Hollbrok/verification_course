#include <stdio.h>
#include <stdlib.h>

void use_after_free() {
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 42;
    free(ptr);
    printf("Value after free: %d\n", *ptr);
}

int main() {
    use_after_free();
    return 0;
}
