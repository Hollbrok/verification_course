#include <stdio.h>

void division_by_zero(int x) {
    int result = 100 / x;
    printf("Result: %d\n", result);
}

int main() {
    int y;
    klee_make_symbolic(&y, sizeof(y), "y");
    division_by_zero(y);
    return 0;
}
