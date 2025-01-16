#include <stdio.h>

int main(){
    int Year;
    printf("Enter the year : ");
    scanf("%d",&Year);
    if (Year%4==0)
    {
        printf(" %d is a leap year ..\n",Year);
    }
    else{
        printf("%d is not leap yaer .. \n",Year);
    }
    
    return 0;
}