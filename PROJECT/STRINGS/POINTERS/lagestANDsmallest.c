//Find Largest and Smallest Elements in an Array
#include <stdio.h>

// Function to find the largest element in the array
int LARGEST(int arr[], int size) {
    int max = arr[0]; // Assume the first element is the largest
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if current element is larger
        }
    }
    return max; // Return the largest element
}

// Function to find the smallest element in the array
int SMALLEST(int arr[], int size) {
    int min = arr[0]; // Assume the first element is the smallest
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i]; // Update min if current element is smaller
        }
    }
    return min; // Return the smallest element
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

    // Find the largest and smallest elements using the user-defined functions
    int largest = LARGEST(arr, n);
    int smallest = SMALLEST(arr, n);

    // Print the largest and smallest elements
    printf("Largest element in the array: %d\n", largest);
    printf("Smallest element in the array: %d\n", smallest);

    return 0;
}