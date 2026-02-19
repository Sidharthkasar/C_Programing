#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    ptr = (int*) malloc(6 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed");
        return 0;
    }

    for(int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
        printf("%d ", ptr[i]);
    }

    free(ptr);   // releasing heap memory
    ptr = NULL;

    return 0;
}
// Allocated manually using malloc
