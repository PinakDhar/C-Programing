#include <stdio.h>

int main(){
    int n;
    int num =1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i = 1; i <=n ; i++){
        for(int k = 1 ; k<=n-i ; k++){
            printf(" ");
        }
        for(int j = 1 ; j<=i ; j++){
            printf("%d ", num );
            num ++ ;
           
        }
        printf("\n");
    }

    return 0;
}