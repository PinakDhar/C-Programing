// Write a C program to perform swapping of two integers without using a third variable.
#include <stdio.h>

int main(){
    int a , b;
    printf("Enter two No - ");
    scanf("%d %d ",a ,b);
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}