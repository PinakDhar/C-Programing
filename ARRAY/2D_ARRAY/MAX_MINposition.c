#include <stdio.h>

int main()
{
    int rows = 3, cols = 3; // Dimensions of the 2D array
    int arr[3][3] = {
        {5, 8, 3},
        {1, 9, 2},
        {7, 4, 6}};

    int max = arr[0][0], min = arr[0][0]; // Initialize max and min with the first element
    int maxRow = 0, maxCol = 0;           // Indices of max element
    int minRow = 0, minCol = 0;           // Indices of min element

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                maxRow = i;
                maxCol = j;
            }
            if (arr[i][j] < min)
            {
                min = arr[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }

    printf("Maximum element: %d at index (%d, %d)\n", max, maxRow, maxCol);
    printf("Minimum element: %d at index (%d, %d)\n", min, minRow, minCol);

    return 0;
}
