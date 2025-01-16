/*
A magic square is a square grid filled with distinct integers
such that the sum of the numbers in each row, each column, and both main diagonals is the same.
For an ( n \times n ) magic square, this constant sum is known as the magic constant 
*/

#include <stdio.h>

void magicSquare(int n) {
    int magicSquare[n][n];

    // Initialize the magic square with zeros
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            magicSquare[i][j] = 0;

    int row = 0, col = n / 2; // Start position

    for (int num = 1; num <= n * n; num++) {
        magicSquare[row][col] = num; // Place the number

        // Calculate the next position
        int newRow = (row - 1 + n) % n; // Move up
        int newCol = (col + 1) % n;     // Move right

        // If the cell is already occupied, move down instead
        if (magicSquare[newRow][newCol] != 0) {
            newRow = (row + 1) % n; // Move down
            newCol = col;           // Stay in the same column
        }

        row = newRow;
        col = newCol;
    }

    // Print the magic square
    int magicConstant = n * (n * n + 1) / 2; // Calculate the magic constant
    printf("Magic Square of size %d:\n", n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", magicSquare[i][j]); // Print with formatting
        }
        printf("\n");
    }
    printf("Magic Constant: %d\n", magicConstant);
}
    
   
int main(){
    int n ;
    printf("Enter a Number : ");
    scanf("%d",&n);
    if(n%2!=0)
        magicSquare(n);
    else 
    printf("Magic Square is not possible for even number\n");
    return 0;
}