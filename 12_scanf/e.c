#include <stdio.h>
int main() {
    char name[30];
    printf("Enter your name: ");
    scanf("%[A-Za-z ]",&name);
    printf("\n++++++++++++++\n\n");
    printf("This is my name: %s",name);
    return 0;
}