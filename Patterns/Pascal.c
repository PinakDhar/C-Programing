#include <stdio.h>
#include<math.h>
int factorial(int x){
    int fact =1 ;
    for(int i=2 ; i<=x ; i++)
        fact = fact * i ;
    
    return fact ; 
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int combination(int n , int r)
    {
        int ncr = factorial(n)/(factorial(r)*factorial(n-r)) ;
    }


    for(int i =0 ; i<= n ; i++){
        for (int j=0; j<=i ; j++){
            printf("%d ", combination(i,j));
        }
        printf("\n");
    }
    return 0;
}