#include <stdio.h>
int maze2(int n , int m ){
    int rightway = 0 ;
    int downway = 0 ;
    if (n==1 && m==1) return 1 ;
    if (n==1){
        rightway +=maze2(n,m-1);
        }
    if(m==1){
        downway += maze2(n-1,m);
    }
    if(n>1 && m>1)
    {
        rightway += maze2(n,m-1);
        downway  += maze2(n-1,m);

    }
    int totalways = rightway + downway ; 
return totalways;
}
int main(){
    int n ;
    printf("Enter a row: ");
    scanf("%d", &n);
    int m ;
    printf("Enter a coloumn: ");
    scanf("%d", &m);
    int totalways = maze2(n,m) ;
    printf("Total ways to reach the target: %d", totalways);
    return 0;
}