#include <stdio.h>

int main() {
    int arr[] = {10, 25, 30, 45, 50};
    int key = 30;
    int n = 5;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element found at index %d", i);
            return 0;
        }
    }

    printf("Element not found");
    return 0;
}
