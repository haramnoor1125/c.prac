#include <stdio.h>
int main() {
    char a = sizeof(char);
    char b = sizeof('L');
    char c = sizeof('a');
    printf("%d %d %d\n",a,b,c);
    return 0;
}