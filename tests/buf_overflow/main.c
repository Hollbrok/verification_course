#include <stdio.h>
#include <string.h>

void buffer_overflow(char *input) {
    char buffer[8];
    strcpy(buffer, input);    
    printf("BUFFER : {%s}\n", buffer);
}

int main() {
    char buf[20];

    klee_make_symbolic(&buf, sizeof(buf), "buf");
    klee_assume(buf[19] != '\x00');
    
    buffer_overflow(buf);
    return 0;
}
