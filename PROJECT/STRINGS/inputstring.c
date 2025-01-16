#include <stdio.h>
#include <string.h>
int main(){
    char str[40];   
    // only the first word will be considered
   // scanf("%s",str);
    //scanf("%[^\n]s",str);
   // gets(str);
    fgets(str, sizeof(str), stdin);
    printf("YOur INput : %s",str);
    return 0;
}