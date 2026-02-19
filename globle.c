#include <stdio.h>

int g = 10;   // Global variable (Global memory)

void show() {
    printf("Inside function, g = %d\n", g); //Accessing global variable from function
}

int main() {
    printf("Inside main, g = %d\n", g); // Accessing global variable from main
    show();
    return 0;
}

// Stored in global memory

// Accessible from any function

