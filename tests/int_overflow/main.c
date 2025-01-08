#include <stdio.h>
#include <limits.h>

void integer_overflow() {
    int max = INT_MAX;
    int overflow = max + 1;
    printf("Overflow value: %d\n", overflow);
}

int main() {
    integer_overflow();
    return 0;
}