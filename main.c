#include "./welcome.h"
#include <stdint.h>
#include <stdio.h>

void hello();

typedef union {
    uint8_t byte[4];
    int32_t value;
} LITTLE;

void printLittle(LITTLE w) {

    printf("%d  %d  %d  %d\n", w.byte[0], w.byte[1], w.byte[2], w.byte[3]);
}

int main() {
    LITTLE w, h;
    w.value = 720;
    h.value = 1280;
    printLittle(w);
    printLittle(h);
    // hello();
    // hello();

    // welcome();
    // welcome();
    return 0;
}

void hello() {
    //
    printf("Hello, World!\n");
}
