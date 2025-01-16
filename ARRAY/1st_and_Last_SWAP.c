#include <stdio.h>

// Function to swap the first and last elements of the array
void SWAP(int arr[], int size) {
    if (size < 2) {
        // If there are less than 2 elements, swapping is not possible
        printf("Array must have at least two elements to swap.\n");
        return;
    }
    
    // Swap the first and last elements
    int temp = arr[0];
    arr[0] = arr[size - 1];
    arr[size - 1] = temp;
}

int main() {
    int n;

    // Input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare the array

    // Input values into the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Display the original array
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Swap the first and last elements using the user-defined function
    SWAP(arr, n);

    // Print the modified array
    printf("Array after swapping first and last elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}