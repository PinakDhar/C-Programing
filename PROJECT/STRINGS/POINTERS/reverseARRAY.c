//WAP to display values in reverse order from an integer array using pointers.
#include <stdio.h>

int main(){
    int n;
    printf("enter the range of array : ");
    scanf("%d",&n);
    int arr[n];
    
    int *pointer ;
    pointer = arr ;
    for(int i=0 ; i< n ; i++){
        printf("Enter  the value of array [%d] : ",i);
        scanf("%d",pointer+i); //arr[i]
    }
    printf("\n");
    for(int i=0 ; i< n ; i++){
        printf("%d ", *(pointer+i))  ;
    }
    printf("\n");
    printf("The reversed ARRAY :");
    for(int i=n-1 ; i>=0 ; i--){
        printf("%d ",*(pointer+i));
    }
    return 0;
}