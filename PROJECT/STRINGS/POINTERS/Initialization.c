#include <stdio.h>

int main(){
    int num  = 10 ;
    int* pointer ;
    pointer = &num; //Assign the address of num to the pointer

    printf("Value of num: %d\n", num); 
    printf("Address of num: %p\n", &num); 
    printf("Value of poiunter (address of num): %p\n", pointer); //<--- this and "Address of num:" should be same  
    printf("Value pointed by Pointer :  %d\n", *pointer); // Dereferencing the pointer to get the value of num

    return 0;
}