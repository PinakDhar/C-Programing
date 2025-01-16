#include <stdio.h>
int power(int b , int p){
    // int x = 1 ;
    // for (int i = 1 ; i<=p ; i++){
    //     x = x * b ;
    // }
    // return x ;
    // }
    
    if(p == 0 || p == 1) return b;
    else 
    return b * power(b , p - 1);

    return;
}

int main() {
    int base ;
    printf("Enter a base : ");
    scanf("%d",&base);
    int pow;
    printf("Enter  a power : ");

    scanf("%d",&pow);
    int Ans=power(base, pow);
    printf("The pOWER of %d upon  %d is %d\n",base,pow,Ans);


    printf("\n");

    return ;
}