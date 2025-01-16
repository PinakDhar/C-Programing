#include <stdio.h>

int main() {
    // Declare pointer variables of different types
    int *intPtr;
    float *floatPtr;
    double *doublePtr;
    char *charPtr;

    // Print the sizes of the pointer variables
    printf("Size of int pointer: %zu bytes\n", sizeof(intPtr));
    printf("Size of float pointer: %zu bytes\n", sizeof(floatPtr));
    printf("Size of double pointer: %zu bytes\n", sizeof(doublePtr));
    printf("Size of char pointer: %zu bytes\n", sizeof(charPtr));

    return 0;
}