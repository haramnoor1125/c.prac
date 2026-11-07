#include <stdio.h>
int main() {

    char gender;
    printf("enter your gender(M/F): ");
    scanf("%c",&gender);

    int age;
    printf("enter your age: ");
    scanf("%d",&age);

    char student;
    printf("are you a student(Y/N): ");
    scanf(" %c", &student);

    printf("\nminimum balance = %s\n",
          gender == 'F' || gender == 'F'
          ? age>=60
            ? "no minimum balance"
                : age<=22 
                    ? "no minimum balance"
                    : "2000"
          : age>=60 
             ? "2000"
             : age<=22 && (student== 'Y' || student == 'N')
                ?"500"
                :"5000"
); 

    printf("interest rate = %d%%" ,
    gender == 'F' || gender == 'f'
      ? age>=60
       ? 12
        : age<=22
         ? 4
         : 8
      : age>=60
         ? 11
         : age<=22 && (student== 'Y' || student == 'N')
           ? 2
           :6);      


    return 0;
}