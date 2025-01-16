/* WAP to take an 1-D integer array (a[5]) 
and initialize it at compile time with 
values (20,-4,88,4,0), 
then print the array elements (without using loop).*/
#include<stdio.h>
int main(){

    int a [5] = {20,-4,88,4,0};
    printf("%d,%d,%d,%d,%d \n", a[0],a[1],a[2],a[3],a[4]);

    return 0 ;
}