#include <stdio.h>
int main() {
    short a = 2;short b = 3;
   // int x = sizeof(a,b);
    int x = sizeof(a + b);
    printf("%d",x);
    return 0;
}