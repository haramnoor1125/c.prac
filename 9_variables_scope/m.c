#include<stdio.h>
int y = 11;

int main() {
 //  int y = 67;
    {
       int y = 98;
        printf("%d\n",y);
    }
    printf("%d\n",y);

    return 0;
}