/* WAP to take an 1-D integer array (a[3]) and 
initialize it at run time with values (2,40,70), 
then print the array elements (without using loop).*/
#include <stdio.h>

int main(){
    int a[3];
    scanf("%d%d%d", &a[0],&a[1],&a[2]);
    printf("Array elements are: %d, %d, %d\n", a[0], a[1], a[2]);
    return 0;
}