#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 1, 4, 2}; 
    int n = 4;

    for(int i = 0; i < n-1; i++) {          // Traverse through all elements
        for(int j = 0; j < n-i-1; j++) {    // Last i elements are already in place
            if(arr[j] > arr[j+1])           // Swap if the element found is greater than the next element
                swap(arr[j], arr[j+1]);     
        }
    }

    for(int i = 0; i < n; i++)              // Print the sorted array
        cout << arr[i] << " ";

    return 0;
}
