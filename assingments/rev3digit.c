#include <stdio.h>

int main() {
    int num, reversedNum = 0;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    // Extract and reverse the digits
    reversedNum += (num % 10) * 100; // Get the last digit and place it in the hundreds place
    num /= 10;
    reversedNum += (num % 10) * 10;  // Get the middle digit and place it in the tens place
    num /= 10;
    reversedNum += num;              // Get the first digit and place it in the units place

    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
