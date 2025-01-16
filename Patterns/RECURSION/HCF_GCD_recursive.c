//WAP to calculate GCD/HCF of two numbers by using a recursive function.

#include <stdio.h>
int HCF(int n , int m){
    if(m==0)
    return n;
    else{
        return HCF(n,n%m) ;
    }
}
int main(){
    int n1 ,n2 ;
    printf("Enter Number 1 : " );
    scanf("%d",&n1);
    printf("Enter Number 2 : " );
    scanf("%d",&n2);
    printf("The HCF/GCD of no : %d",HCF(n1,n2));
    return 0;
}