#include <stdio.h>
int stair(int n)
{
    if (n==1 || n==2)
    return n;
    else 
    {
        return stair(n-1)+ stair(n-2) ;
    }
}
int main(){
    int n;
    printf("eNTER A NO : ");
    scanf("%d",&n);
    int ways = stair(n);
    printf("No of ways - %d ", ways);
    
    return 0;
}