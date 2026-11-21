#include <stdio.h>
int main (){

    char x[2][9] = {"mohandas","ramchand"};
    int i;

    for(i = 0 ; i<2 ; i++)
        //printf("%d\n",x[i]);
        //printf("%c\n" , x[i]);
        printf("%s\n", x[i]);
    return 0;
}