#include <stdio.h>

int main() {
    int arr[2][2]; // Declare a 2x2 array

    // Assign values to the array
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[1][0] = 3;
    arr[1][1] = 4;

    // Print the values of the array
    printf("%d ", arr[0][0]);
    printf("%d ", arr[0][1]);
    printf("%d ", arr[1][0]);
    printf("%d\n", arr[1][1]); // Use \n for a new line at the end

    return 0;
}