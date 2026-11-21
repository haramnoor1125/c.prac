#include <stdio.h>

int main() {

    char x[3][25];
    int i;

    int size = sizeof(x) / sizeof(x[0]);

    for(i = 0; i < size; i++)
        scanf("%s", x[i]);

    printf("\n--------------------\n");

    for(i = 0; i < size; i++)
        printf("%s\n", x[i]);

    return 0;
}