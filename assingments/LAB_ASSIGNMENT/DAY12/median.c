//WAP to find the median of a list of numbers stored in an array

#include <stdio.h>

int main(){
    int n;
    int arr[n];
    for(int i=0 ;i<n ; i++){
        scanf("%d",&arr[i]); 
    }
    //arrange the no in accending ...
    for(int i=0 ;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
        }
    }
    //Median calc..
    if(n%2==0){
        int posi =(n+1)/2;
        int median = arr[posi];
        printf("The median is : %d ",arr[posi]);
    }
    else{
        int pos=(n/2)+1;
        int median = arr[pos];
        printf("The median is : %d ",arr[pos]);
    }
    
    return 0;
}