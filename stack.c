#include <stdio.h>

void demo() {
    int x = 5;  // Stack memory
    printf("x = %d\n", x);
}

int main() {
    demo();
    return 0;
}
// Allocated automatically

// Destroyed when function ends

// Fast but limited size

// Cannot resize