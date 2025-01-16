#include <stdio.h>

int main(){
    int r;
    printf("Enter  number rows : ");
    scanf("%d",&r);
    int c ;
    printf("Enter  number coloumns : ");
    scanf("%d",&c);
    
    int arr [r][c];
    for(int i=0 ; i<r ; i++){
        for(int j= 0 ; j<c ; j++)
            scanf("%d" , &arr[i][j]);
    }
    printf("\n");
    // Print the array in matrix form
    for (int i = 0; i < r; i++) {       // Loop through rows
        for (int j = 0; j < c; j++) {   // Loop through columns
            printf("%d ", arr[i][j]);   // Print each element
        }
        printf("\n");                    // New line after each row
    }

    return 0;
}