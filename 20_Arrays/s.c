#include <stdio.h>

int main() {

    char name[25];

    printf("Enter your name: ");
    scanf("%[A-Za-z ]", name);

    printf("\n\n+++++++++++++++++++\n\n");

    printf("%s", name);

    return 0;
}
