#include <stdio.h>

int main(){
    int n ;
    printf("Enter a No -- ");
    scanf("%d",&n);
    if (n%3== 0 || n%4==0)
    printf("The no is divisible by 3 or 4 .... ");
    return 0;
}