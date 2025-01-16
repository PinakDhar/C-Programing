/*

A                         
b C                       
D e F                         
g H i J

*/

#include <stdio.h>

int main(){
    int n ;
    printf("Enter a NO : ");
    scanf("%d",&n);

    int x = (int)'a';   // Explicitly cast the character to an integer
    for(int i = 1 ; i<=n ; i++){
        for (int  j = 1 ; j<=i ; j++){
            if (i==j || (i+j)%2==0){

                printf("%c ",x-32);
            }
              
            else
                printf("%c ",x);

            x++;

        }
        printf("\n");

    }
    
    return 0;
}