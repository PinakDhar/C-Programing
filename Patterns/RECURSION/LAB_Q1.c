#include <stdio.h>
void func(int n){
    if(n<1)
        return ;
    else {
        printf("%d ",n);
        func(n-1);
        printf("%d ",n);
    
    }
}
int main(){
    int n ;
    n =3 ;
    func(n);
    return 0;
}