#include <stdio.h>

int main() {

    char x[25];

    int i;

    for(i = 0; i < 25; i++)
        printf("%c", x[i]);

    printf("\n+++++++++\n");    
    
    for(i = 0; i < 25; i++)
        scanf("%c", &x[i]);

    printf("\n+++++++++\n");   
     
    for(i = 0; i < 25; i++)
        printf("%c", x[i]);

    return 0;
}
