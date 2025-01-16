#include<stdio.h>
int main(){
    int n;
    printf("Enter a number -- ", n);
    scanf("%d",&n);
    for (int i=1 ; i<=10  ; i++){             //for (int i=10 ; i  ; i--)   for reverese
        printf("%d X %d = %d\n",n , i, n*i);

    }
    return 0;
}



