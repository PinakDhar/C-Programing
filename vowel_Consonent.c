#include <stdio.h>

int main(){
    char Ch;
    printf("ENter a CHaracter -- ");
    scanf("%c", &Ch);
    if(Ch>='0' && Ch<= '9'){
        printf("The entered character  %c is not a alphabet \n",Ch);
    }
    else if (Ch=='a'||Ch=='e'||Ch=='i'||Ch=='o'||Ch=='u')
    {
        printf("The entered character %c is a vowel \n" ,Ch);
    }
    else {
        printf("The entered character %c  is consonent \n" ,Ch);
    }
    return 0;
}


/*#include <stdio.h>

int main() {
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    // Check if the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("The given character is a vowel.\n");
    } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("The given character is a consonant.\n");
    } else {
        printf("The entered character is not an alphabet.\n");
    }

    return 0;
}
*/

