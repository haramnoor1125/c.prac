#include <stdio.h>
int main (){

    char x[3][9] = {"mohandas","ramchand","kaiyenat"};
    int i;
    int size = sizeof(x) / sizeof(x[2]);

    for(i = 0 ; i<size ; i++)
        printf("%s\n", x[i]);
    return 0;
}