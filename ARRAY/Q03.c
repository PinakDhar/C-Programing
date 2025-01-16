/*WAP to take an 1-D integer array (a[5]) and
initialize it at compile time with values (200,-94,8,84,50), 
then print the array elements using loop.*/
#include <stdio.h>

int main(){

    int i;
    int a[5]={200,-94,8,84,50};
    for (i=0;i<5;i++)
    {
        printf("%d : %d \n", i, a[i]);
    }
    return 0;
}