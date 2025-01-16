#include <stdio.h>

int  fibbo(int n)
{
    if (n <= 1) return n;
    else
    return (fibbo(n - 1) + fibbo(n - 2));
}

int main(){
    int n ;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The fibbonacci sequence is --  %d",fibbo(n));

    return 0;
}