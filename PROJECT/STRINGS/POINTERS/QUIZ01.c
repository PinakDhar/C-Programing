#include <stdio.h>

int main(){
    int num []={10,7,4,0,1,2,99} ,*p=&num , i;
    for(i =0 ; i<3 ;i++){
        printf(" %d  %d  %d " ,*p++ ,++*p ,*p++);
         //printf(" %d  %d  %d " ,*p++ ,*p++ ,*p++);
        printf("\n");

    }
    return 0;
}