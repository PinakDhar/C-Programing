//Print your name 10 times
// #include<stdio.h>
// int main()
// {   
//     char ch[30];
//     int i ;
//     printf("Enter your name -- ");
//     scanf("%c",&ch);
//     for (i=1;i<=10;i++)
//         printf("%c \n",ch);
// return 0;
// }

#include <stdio.h>

int main() {
    int i;
    char name[50]; // Array to store the name
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin); // Read a full line of text
    // Remove the newline character if present
    name[strcspn(name, "\n")] = 0;
    for (i=1 ;i<=10 ; i++)
        printf("%s!\n",name);
    return 0;
}
