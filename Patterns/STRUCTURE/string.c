#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// strlen()
// strcpy( intial variable , "Pinak") // prothome jeta dibi  seta copy hocche second e jeta dicchis
// strcat(str 1 , str2 ) // prothome jeta dibi  seta concatinate  hocche second e jeta dicchi

int main()
{
    char str1[100], str2[100];
    strcpy(str1, "Pinak Dhar");
    strcat(str2, "is a good boy");
    printf("%s", str1, str2);

    printf("\n");
    printf("%zu \n", strlen(str1));
    printf("%s", strcat(str1, str2));

    return 0;
}
