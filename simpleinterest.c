#include<stdio.h>
int main(){
    int p,r,t ;
    printf("Enter Principal , rate  , time");

    scanf("%d %d %d" ,&p,&r,&t);
    printf("Simple Interest = %d    " ,(p*r*t)/100);

    return 0 ;

}