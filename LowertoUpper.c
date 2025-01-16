#include <stdio.h>

int main(){
    char ch;
    // char ch1;
    printf("Enter a  character --",ch);
    scanf("%c",&ch);
    // if (ch>='a'&&ch<='z')
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
     int ch1 =ch-32;
     printf("The character is  been upgraded to upper case - %c ",ch1);
    }
    else{
        printf("invalid input !!!");
    }
    
    return 0;
}