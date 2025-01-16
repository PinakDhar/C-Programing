#include <stdio.h>

// Function to rotate values of a, b, c
void rotate(int *a, int *b, int *c) {
    int temp = *a;  // Store the value of a in a temporary variable
    *a = *b;        // Assign the value of b to a
    *b = *c;        // Assign the value of c to b
    *c = temp;     // Assign the original value of a to c
}

int main() {
    int a, b, c;

    // Input values for a, b, and c
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);
    printf("Enter value for c: ");
    scanf("%d", &c);

    // Display original values
    printf("Original values: a = %d, b = %d, c = %d\n", a, b, c);

    // Call the rotate function
    rotate(&a, &b, &c);

    // Display rotated values
    printf("Rotated values: a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}