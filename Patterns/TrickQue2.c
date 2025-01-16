/*
This pattern is known as a "magic square," though it's a bit untraditional 
because it doesn't follow the typical rules of a magic square
where the sums of numbers in each row, column, and diagonal are all the same.

1 2 4 7
3 5 8 11
6  9 12 14
10  13 15 16

*/


//WRONG CODE X

#include <stdio.h>

int main() {
    int n = 4; // Number of rows (and columns)
    int arr[n][n]; // Create a 2D array to store the pattern
    int num = 1; // Starting number

    // Fill the array with the desired pattern
    for (int col = 0; col < n; col++) {
        for (int row = 0; row < n; row++) {
            if (row <= col) {
                arr[row][col] = num++;
            } else {
                arr[row][col] = arr[row - 1][col] + 1; // Fill downwards
            }
        }
    }

    // Print the array
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            printf("%2d ", arr[row][col]); // Print numbers with padding
        }
        printf("\n");
    }

    return 0;
}