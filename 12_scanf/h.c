#include <stdio.h>

int main()
{
    char gender;
    printf("enter your gender(M/F): ");
    scanf(" %c", &gender);

    int age;
    printf("enter your age: ");
    scanf("%d", &age);

    char student;
    printf("are you a student(Y/N): ");
    scanf(" %c", &student);

    printf("\nMinimum balance = %s\n",
        gender == 'F' || gender == 'f'
        ? age >= 60
            ? "No minimum balance"
            : age <= 22
                ? "No minimum balance"
                : "2000"
        : age >= 60
            ? "2000"
            : age <= 22 && (student == 'Y' || student == 'y')
                ? "500"
                : "5000"
    );