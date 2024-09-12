#include <stdio.h>

int main() {
    int arr[] = {10, 3, 5, 25, 7, 20}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int max = arr[0]; // Initialize max to the first element of the array

    // Loop through the array to find the maximum element
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if the current element is greater
        }
    }

    // Print the maximum element
    printf("The maximum element in the array is: %d\n", max);

    return 0;
}