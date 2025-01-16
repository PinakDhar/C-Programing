#include <stdio.h>
int factorial(int n){
    
    if (n == 0 || n==1 ) return 1 ;
    else  
    return n * factorial(n-1) ;

}
int main(){
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        factorial(i);
        printf("Factorial of  %d = %d\n",i,factorial(i));

    }
    printf("\n");

    return 0;
}