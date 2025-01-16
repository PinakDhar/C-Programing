// PEKACHU   60 HEALTH   100 SPEED   70 ATTACK
// CHARIZRAD 80 HEALTH   80 SPEED   130 ATTACK
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    struct pokemon
    {
        char name[20];
        int health;
        int speed;
        int attack;
    };
    struct pokemon pekachu;
    pekachu.attack = 70;
    pekachu.health = 60;
    pekachu.speed = 100;
    strcpy(pekachu.name, "PEKACHU");
    struct pokemon charizard;
    charizard.attack = 130;
    charizard.health = 80;
    charizard.speed = 70;
    strcpy(charizard.name, "CHARIZARD");
    struct pokemon mewtwo;
    mewtwo.attack = 170;
    mewtwo.health = 150;
    mewtwo.speed = 200;
    strcpy(mewtwo.name, "MEWTWO");

    printf("\n");
    printf("The following are the stats of the three Pokemon:\n");
    printf("\n");
    printf("%d\n", mewtwo.attack);
    printf("%s", pekachu.name);
    return 0;
}