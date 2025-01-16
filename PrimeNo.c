#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    // Asking the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // 0 and 1 are not prime numbers
    if (n <= 1) {
        isPrime = 0;
    } else {
        // Check for factors
        // for (i = 2; i <= n / 2; ++i) {
        //     if (n % i == 0) {
        //         isPrime = 0;
        //         break;


        for (i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            
            }
        }
    }

    // Display the result
    if (isPrime)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
