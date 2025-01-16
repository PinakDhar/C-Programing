#include<stdio.h>
int sum (int n){
    if(n<10)
        return n;
    else {
        int s =0;
        while(n!=0){
            s += n%10;
            n/=10;

        }
        return sum(s);
  
  }
}
int main(){
    int n ;
    printf("Enter a No : ");
    scanf("%d",&n);
    int ans= sum(n);
    printf("REsult : %d" , ans);
    return 0;
}