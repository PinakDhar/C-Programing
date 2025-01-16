#include<stdio.h>
int main() 
{   
    int a ,b ,c ;
    scanf("%d",&a);
    printf("Enter First No : %d" ,a);
    scanf("%d",&b);
    printf("Enter second No : %d" ,b);
    
    c=b;
    b=a;
    a=c;
    
    printf("The values are swapped");
    printf("A = %d \n",a);
    printf("B = %d",b);
    



    return 0;


}