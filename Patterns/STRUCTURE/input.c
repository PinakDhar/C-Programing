#include <stdio.h>

int main()
{
    struct student
    {
        int roll;
        char name[50];
        char gender;
        int marks;
    } s1;

    printf("Enter the student data (roll number, gender, marks): \n");

    // Using fgets to safely read the name
    printf("Name: ");
    // gets(s1.name);
    fgets(s1.name, sizeof(s1.name), stdin);

    // Remove newline character from name if it exists
    size_t len = strlen(s1.name);
    if (len > 0 && s1.name[len - 1] == '\n')
    {
        s1.name[len - 1] = '\0';
    }

    // Read roll number, gender, and marks
    printf("Roll No: ");
    scanf("%d", &s1.roll);
    printf("Gender (M/F): ");
    scanf(" %c", &s1.gender); // Note the space before %c to consume any leftover whitespace
    printf("Marks: ");
    scanf("%d", &s1.marks);

    printf("\nThe Student's details are:\n");
    printf("Roll No: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("Gender: %c\n", s1.gender);
    printf("Marks: %d\n", s1.marks);

    return 0;
}