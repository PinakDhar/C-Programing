#include<stdio.h>
int main(){
    int n ;
    printf("Enter a positive no --");
    scanf ("%d",&n);
    int i ;
    int product = 1 ;
    if(n<0){
        printf ("The no is negetive");
    }
    else {
        for (i=1 ; i<=n; i++){
            product*=i;
        }
        
        printf("the factorial of %d is %d " ,n ,product );
    }
    
    return 0;

}
    
