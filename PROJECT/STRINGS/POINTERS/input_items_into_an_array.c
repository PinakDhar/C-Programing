// WAP to input items into an integer array using a pointer.
#include <stdio.h>
int main(){
    int arr[10];
    int *pointer ;
    pointer  = arr;

    for(int i=0;i<5;i++){
        printf("Enter the value of arr[%d] : ",i);
        scanf("%d",pointer+i);
    }

    
    for(int i=0 ; i < 5 ; i++){
        printf("%d", *pointer + i);
    }

    return 0;
}