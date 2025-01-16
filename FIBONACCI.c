#include <stdio.h>

// Function to calculate Fibonacci number (with return type, without parameters)
int fibonacci() {
    int n;
    printf("Enter the term index (n): ");
    scanf("%d", &n);

    int a = 0, b = 1, c;

    // Special cases
    if (n == 0) return a;
    if (n == 1) return b;

    // Calculate Fibonacci
    for (int i = 2; i <= n; i++) {
        c = a + b; // Next term is the sum of the previous two
        a = b;     // Update a to the next term
        b = c;     // Update b to the next term
    }

    return b; // Return the nth Fibonacci number
}

int main() {
    // Call the function to calculate Fibonacci and print the result
    int result = fibonacci();
    printf("Fibonacci term: %d\n", result);

    return 0;
}