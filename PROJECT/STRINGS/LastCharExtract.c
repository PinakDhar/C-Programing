#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Last characters of each word: ");
    int len = strlen(sentence);
    for (int i = 0; i < len; i++) {
        
        if (sentence[i] != ' ' && (sentence[i + 1] == ' ' || sentence[i + 1] == '\0')) {
            printf("%c ", sentence[i]);
        }
    }

    return 0;
}