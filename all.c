#include <stdio.h>
#include <stdlib.h>

int globalVar = 100;   // Global memory

void demo() {
    static int staticVar = 200;  // Static memory
    int stackVar = 300;          // Stack memory

    int *heapVar = (int*) malloc(sizeof(int));  // Heap memory
    *heapVar = 400;

    printf("Global   = %d\n", globalVar);
    printf("Static   = %d\n", staticVar);
    printf("Stack    = %d\n", stackVar);
    printf("Heap     = %d\n", *heapVar);

    free(heapVar);
}

int main() {
    demo();
    return 0;
}

// “Stack memory is automatic and temporary, heap memory is manual and dynamic.”