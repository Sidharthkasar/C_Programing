// Value is preserved between function calls

// Memory allocated only once



// Scope = limited (inside function)


#include <stdio.h>
int count=0;  // Global variable (Global memory)
void counter() {
    static int count = 0;  // Static memory
    count++;
    printf("Count = %d\n", count);
}

int main() {
    counter();
    counter();
    counter();
    return 0;
}