#include <stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str),stdin);
    printf("\n ");
    puts(str);
    int i = 0 ;
    int* p = str[i];
    // while(str[i]!='\0'){
    for(i=0 ; i<strlen(str)-1; i++){
        printf("%p \n",str[i]);
        //i++;
    }

    return 0;
}