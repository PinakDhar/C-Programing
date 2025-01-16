#include <stdio.h>
#include <string.h>
int main()
{
    struct employee
    {
        char name[50];
        int roll;
        float salary;
    } a;
    a.roll = 24157029;
    a.salary = 6538.53;
    strcpy(a.name, "Pinak Dhar");
    printf("Roll Number : %d\n", a.roll);
    printf("Salary : %f\n", a.salary);
    printf("Name : %s", a.name);
    return 0;
}