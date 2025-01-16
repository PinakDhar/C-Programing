#include <stdio.h>
int fibbo(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
        return fibbo(n - 1) + fibbo(n - 2);
}
int main()
{
    int n;
    printf("Enter a number of nth term you want to find in fibonacci series : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) // ekhne loop use kora holo n terms print kortei
                                // each term er jonno fibbo function call kora hocche
    {
        printf("%d ", fibbo(i));
    }
    printf("\n");

    return 0;
}