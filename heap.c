#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    ptr = (int*) malloc(sizeof(int));  // Heap memory

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    *ptr = 50;
    printf("Value = %d\n", *ptr);

    free(ptr);   // Release memory
    ptr = NULL;

    return 0;
}

// Allocated at runtime

// Programmer must free() it

// Used in linked list, tree, graph

// Large memory available