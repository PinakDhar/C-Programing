#include <stdio.h>

int main(){
    int n1 , n2 ;
    printf("Enter First no = ");
    scanf("%d",&n1);
    printf("Enter Second No = ");
    scanf("%d",&n2);
    if(n1>n2){
        printf("%d is the LARGEST \n",n1);
    }
    else{
        printf("%d is the LARGEST",n2);
    }

    return 0;

}