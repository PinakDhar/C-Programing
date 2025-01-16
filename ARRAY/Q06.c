/*WAP to take an 1-D integer array (a[20]) and initialize it at run time with same value 5
 for starting 10 elements and with value 50 for last 10 elements , then print the array elements.*/
#include <stdio.h>

int main(){
    int i;
    int a[20];
    for(i=0;i<10;i++){
        a[i]=5;
    }
    for(i=10;i<20;i++)
        a[i]=50;
    for(i=0;i<20;i++)
        printf("%d :",a[i]);
    return 0;
}