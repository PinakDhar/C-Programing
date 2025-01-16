#include <stdio.h>

int main()
{
    int arr[2][2];
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[1][0] = 3;
    arr[1][1] = 4;
    // Print the array in matrix form
    for (int i = 0; i < 2; i++)
    { // Loop through rows
        for (int j = 0; j < 2; j++)
        {                             // Loop through columns
            printf("%d ", arr[i][j]); // Print each element
        }
        printf("\n"); // New line after each row
    }

    return 0;
}
