#include <stdio.h>
#include <stdlib.h>

int main() {

    char x[3][25];
    int i;

    int size = sizeof(x) / sizeof(x[0]);

    for(i = 0; i < size; i++) {
        fflush(stdin);
        scanf("%[A-Za-z ]", x[i]);
    }

    printf("\n--------------------\n");

    for(i = 0; i < size; i++)
        printf("%s\n", x[i]);

    return 0;
}
