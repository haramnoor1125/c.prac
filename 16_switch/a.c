#include <stdio.h>
int main(){
    int n;
    printf("press \n1 for Hindi \n2 for English \n3 for Sanskrit: ");
    scanf("%d", &n);

    switch(n){
        case 1:
        printf("Hindi");
        break;

        case 2:
        printf("English");
        break;

        case 3:
        printf("Sanskrit");
        break;

        default:
        printf("Maths");
    }
    return 0;
}