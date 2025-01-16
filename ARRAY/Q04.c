/*WAP to take an 1-D integer array (a[5]) and initialize it at run time (using loop) 
with values (20,-4,88,4,0), then print the array elements (using loop).*/
#include <stdio.h>

int main(){
    int i;
    int a[5];
    printf("Enter values --- (20,-4,88,4,0) ~~ ");
    scanf("%d",&a[0]);
    scanf("%d",&a[1]);
    scanf("%d",&a[2]);
    scanf("%d",&a[3]);
    scanf("%d",&a[4]);
    for (i=0;i<5;i++)
    {
        printf("%d " ,a[i]);
    }
    return 0;
}