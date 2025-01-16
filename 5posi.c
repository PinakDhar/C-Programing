#include <stdio.h>

int main(){
    int i , n;
    int sum = 0 ;
    for (i=0;;)
    {
        printf ("Enter a no - ");
        scanf("%d",&n);
            if (n>=0){
                sum=sum+n;
                i++;
            }
        if(i==5)
        break;
    }
    printf("The sum is -- %d",sum);
    return 0;
}