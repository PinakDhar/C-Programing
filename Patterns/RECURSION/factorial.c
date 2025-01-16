#include <stdio.h>
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        factorial(i);
        printf("Factorial of  %d = %d\n", i, factorial(i));
    }
    printf("\n");

    return 0;
}