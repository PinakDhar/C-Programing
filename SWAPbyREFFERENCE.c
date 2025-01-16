#include <stdio.h>
void swap(int* x , int* y)
{
    int temp = *x;
    *x=*y;
    *y=temp ;
    return;
}
int main(){
    int a ;
    printf("Enter the  value of a: ");
    scanf("%d",&a);
    int b ;
    printf("Enter the value of b : ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("\n");
    printf("The value of a : %d \n",a);
    printf("The value of b : %d " , b);
    return 0;
}