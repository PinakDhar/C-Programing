#include <stdio.h>
int decreasing_increasing(int n)
{
    if (n == 0)
        return 0;
    printf("%d\n", n);
    decreasing_increasing(n - 1);
    printf("%d\n", n);
    return;
}
int main()
{
    int n;
    printf("enter a no - ");
    scanf("%d", &n);
    printf("\n");
    decreasing_increasing(n);
    return 0;
}