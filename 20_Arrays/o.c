#include <stdio.h>

int main() {

    char x[10];
    int i;

    x[0] = 'A';
    x[1] = 'B';
    x[2] = 'C';
    x[3] = 'D';
     x[4] = '\0';

    for(i = 0; i < 10; i++)
        printf("%c", x[i]);

    printf("\n\n%s", x);

    return 0;
}

