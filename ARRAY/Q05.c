/*WAP to take an 1-D integer array (a[5]) 
and enter values (0,-9,-8,44,5), then print the array elements in reverse order.*/
#include <stdio.h>

int main(){
    int i ;
    int a[5]={0,-9,-8,44,5};
    for (i=4;i>=0;i--){
        printf("%d : ", a[i]);
    }

    return 0;
}