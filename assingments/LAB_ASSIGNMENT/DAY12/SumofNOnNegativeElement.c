// Given an array of non-negative integers and an integer sum, find a subarray
// that adds to a given sum.
#include <stdio.h>

int main(){
    int n ;
    printf("Enter a no : ");
    scanf("%d",&n);
    int arr[n];
    int count ;
    int sum = 0 ;
    int num;
    while (count < n) {
        scanf("%d", &num);
// Only accept positive numbers
        if (num > 0) { 
            arr[count] = num;
            sum += num ;
            count++;
        } 
     }
    printf("\n");
    for(int i =0 ; i<n ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("\nthe sum of the elements are : %d\n",sum);


return 0;
}