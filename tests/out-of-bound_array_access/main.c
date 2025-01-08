#include <stdio.h>

void out_of_bounds(int index) {
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = arr[10];
}

int main() {
    int index = 6;
    klee_make_symbolic(&index, sizeof(index), "index");
    out_of_bounds(index);
    return 0;
}
