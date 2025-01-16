/*
1
01
101
0101
*/
#include <stdio.h>

int main(){
    int n;
    int a;
    printf("Enter the no of row --");
    scanf("%d",&n);
    for (int i =1 ; i<=n;i++)
    {
        if (i%2!=0) 
            a=1;
        else  
            a = 0;
        
        for(int j =1 ; j<=i ; j++)
        {   
            /*if(j%2!=0)
            a =1;
            else 
            a= 0;*/

            printf("%d",a);
            if(a==0)    a=1;
            else a =0;
        }
        printf("\n");
    }

    return 0;
}