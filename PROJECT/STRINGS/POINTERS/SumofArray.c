#include <stdio.h>

// Function to calculate the sum of elements in an array
int calculateSum(int arr[], int size) {
    int sum = 0; // Initialize sum to 0
    for (int i = 0; i < size; i++) {
        sum += arr[i]; // Add each element to sum
    }
    return sum; // Return the total sum
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

    // Calculate the sum using the user-defined function
    int sum = calculateSum(arr, n);

    // Print the sum
    printf("The sum of the elements in the array is: %d\n", sum);

    return 0;
}