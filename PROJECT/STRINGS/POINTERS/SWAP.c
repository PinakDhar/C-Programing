#include <stdio.h>
void swap(int*a , int *b) {
    
    int temp ;
    temp = * a ;
    * a = * b;
    * b = temp ;
    return ;
}

int main(){
    int a ;
    printf("Ënter a NO A : ");
    scanf("%d",&a);
    int b ;
    printf("Ënter a NO B : ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("the  value of a is %d \n",a);
    printf("the value of b is %d \n ",b);


    return 0;
}