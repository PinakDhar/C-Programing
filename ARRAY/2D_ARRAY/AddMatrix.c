#include <stdio.h>

int main(){
    int arr [2][2];
    for (int i = 0 ; i<2 ; i++){
        for (int j =0 ; j<2 ; j++)
        scanf("%d",&arr[i][j]);
    }
    int brr [2][2];
    for (int i = 0 ; i<2 ; i++){
        for (int j =0 ; j<2 ; j++)
        scanf("%d",&arr[i][j]);
    }
    
    int result[2][2]= arr[2][2] + brr[2][2] ;
    printf("The sum of TWO Matrices are : ", result [2][2]);

    return 0;
}