#include <stdio.h>

int main(){
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);
    int i ,j ;
    for (i=1;i<=n; i++){
        for(j=1;j<=5;j++){
            printf("* ");
        }
        
    printf("\n");
    }
    return 0;
}