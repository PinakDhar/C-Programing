#include <stdio.h>

int main(){
    int n ;
    printf("Enter the a no : ");
    scanf("%d",&n);
    int arr[5];
    for(int i=0;i<=n-1;i++){
        printf("Enter the element %d :\n",i+1);
        scanf("%d",&arr[i]);
        
    }
    for(int j =n-1;j>=0;j--){
        printf("%d  ",arr[j]);
    }


    return 0;
}