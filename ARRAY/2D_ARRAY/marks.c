/*Ques : Write a program to store roll number and
marks obtained by 4 students side by side in a
matrix.*/
 #include <stdio.h>
 
 int main(){
   // int arr[2][4]={{76,80},{67, 81},{40,90},{21, 92}};
    int arr [4][4];
     for(int i=0 ; i<4 ; i++){
        for(int j= 0 ; j<4 ; j++)
            scanf("%d" , &arr[i][j]);
    }
    printf("\n");
    // Print the array in matrix form
    for (int i = 0; i < 4; i++) {       // Loop through rows
        for (int j = 0; j < 4; j++) {   // Loop through columns
            printf("%d ", arr[i][j]);   // Print each element
        }
        printf("\n");                    // New line after each row
    }

    return 0;
 }