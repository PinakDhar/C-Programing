#include <stdio.h>
int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return (n%10)+sum(n/10);
    }
}
int main(){
    int n ;
    printf("ENter a number : ");
    scanf("%d",&n);
    printf("The sum of the digits: %d ",sum(n));
    return 0;
}