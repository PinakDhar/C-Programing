#include <stdio.h>

int main(){
    int r;
    printf("Enter number rows: ");
    scanf("%d",&r);
    int c ;
    printf("Enter number Coloumn :");
    scanf("%d",&c);
    int  arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
    }
    }
    printf("\n");
    printf("\n");
    
    printf("The  matrix is:\n");

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("The Transposed Matrix is : \n");
    for (int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",arr[j][i]);
            }
            printf("\n");
    }


    return 0;
}
