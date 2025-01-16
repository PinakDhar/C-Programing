#include <stdio.h>

int main() {
    int marks;
    char grade;

    // Input marks
    printf("Enter the total marks secured: ");
    scanf("%d", &marks);

    // Determine grade based on marks
    if (marks >= 90 && marks <= 100) {
        grade = 'O';
    } else if (marks >= 80 && marks < 90) {
        grade = 'E';
    } else if (marks >= 70 && marks < 80) {
        grade = 'A';
    } else if (marks >= 60 && marks < 70) {
        grade = 'B';
    } else if (marks >= 50 && marks < 60) {
        grade = 'C';
    } else if (marks >= 40 && marks < 50) {
        grade = 'D';
    } else if (marks < 40) {
        grade = 'F';
    } else {
        printf("Invalid marks entered.\n");
        return 1;
    }

    // Output the grade
    printf("The grade is: %c\n", grade);

    return 0;
}
