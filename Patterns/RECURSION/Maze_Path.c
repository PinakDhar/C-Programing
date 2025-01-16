#include <stdio.h>
int maze(int cc , int cr , int ec , int er)
{
    int rigthway = 0;
    int downway = 0 ;
    if(cc==ec && er == cr)
    return 1 ;
    if (cr==er){
        rigthway +=maze(cc+1 ,cr ,ec,er);
    }
    if (cc==ec){
        downway += maze(cc,cr+1,ec,er);
    }
    if(cc<ec &&  cr<er)

    {
        rigthway += maze(cc+1 ,cr ,ec,er);
        downway  += maze(cc,cr+1,ec,er);

    }
    int totalway = rigthway+downway;
    return totalway ;
}
int main(){
    
    int n ;
    printf("Enter a row: ");
    scanf("%d", &n);
     int m ;
    printf("Enter a coloumn : ");
    scanf("%d", &m);
    int TotalNoWays = maze(1,1,n ,m);
    printf("NO of ways -  %d\n", TotalNoWays);

    return 0;
}