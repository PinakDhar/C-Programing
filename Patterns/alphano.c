/*
1
AB
123
ABCD
12345
*/

#include <stdio.h>

int main(){
    int n;
    printf("Enter no of Rows --");
    scanf("%d",&n);
    for (int i= 1 ; i<=n ; i++){
        int a =1 ;
        for(int j=1 ;j<=i; j++)
        {
            if(i%2!=0)
            {
                printf("%d",j);
            }
            else
            {
                char ch = a+64;
                printf("%c",ch);
                a++ ;
            }
        }
        printf("\n");
    }
    return 0;
}