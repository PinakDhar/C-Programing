#include <stdio.h>
#include <string.h>
int swap(char* a , char* b){
    char temp = *a;
    *a=*b;
    *b=  temp;
    return ;

}
int main(){
    char str[100];
    printf("ENter a String : ");
    fgets(str, sizeof(str), stdin);
    printf("Entered String :  %s",str);
    printf("\n");
//SIZE OF THE ARRAY 
// int size = 0 ;
// int x =0 ;
// while(str[x]!='\0'){
//     size++ ;
//     x++ ;

// }

// reverse
    for(int i = 0 , j =  strlen(str)-1 ; i <= j ; i++ , j--){
        swap(&str[i],&str[j]);
       
    }
     printf("the revesred string is : %s",str);

    
    return 0;
}