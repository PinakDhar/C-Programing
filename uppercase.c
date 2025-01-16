#include <stdio.h>

int main(){
    char Ch ;
    printf("Enter a Character ---  ");
    scanf("%c",&Ch);
    // if (Ch>=97 && Ch<=122)
     if (Ch>='a' && Ch<='z')
    {
        printf("The upper case of the entered letter is ' %c ' \n",Ch-32);
    }
    else{
        printf("You have entered  %c  which is already in upper case \n",Ch);
    }
    return 0;
}
