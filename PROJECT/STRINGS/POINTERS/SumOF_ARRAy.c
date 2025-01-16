#include <stdio.h>
int main(){
    int arr[10];
    int *pointer ;
    pointer  = arr;

    for(int i=0;i<5;i++){
        printf("Enter the value of arr[%d] : ",i);
        scanf("%d",pointer+i);
    }
    for(int i = 0 ; i<5 ; i ++){
     printf("%d ", *(pointer+ i));   
    }
    printf("\n");
    int sum =0 ;
    for(int i = 0 ; i <5 ;i++){
        sum = sum + *(pointer+i);
    }
    printf("The sum of the array  is %d",sum);

return 0 ;
}