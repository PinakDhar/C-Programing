#include <stdio.h>
int max=0;
int largestelement(int arr[],int n){
    
    if(n<1)
        return arr[0];
    else{
        if(max<arr[n]){
            max=arr[n];
            largestelement(arr,n-1);
        }
        else
            largestelement(arr,n-1);
    return max;
    
    
    }

}
int main(){
    int n;
    printf("Enter a  NO :: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(int i=0 ; i<n ;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("The largest element is : %d ",largestelement(arr,n-1));
    return 0;
}