//NO GUESSING GAME......................................................
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int randomNumber = (rand()%100) +1 ;
    int no_of_guesse ;
    int guessed;

    do
    {
        printf("Guess the Number ....\n");
        scanf("%d",&guessed);
        if (guessed>randomNumber)
        {
            printf("Lower Number pls !\n");
        }
        else {
            printf("Higher Number pls\n");
        }
        no_of_guesse++;

        
    } while (randomNumber!=guessed);

    printf("Congrats !\n");
    printf("You have guessed the no in %d Guesses ...\n" ,no_of_guesse);


    return 0;
}