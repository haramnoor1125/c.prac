#include <stdio.h>
int main (){
    int n;
    printf("Enter a number:  ");
    scanf("%d",&n);


    switch (n){

        default:
        printf("namaskar\n");
        break;

        case 1:
        printf("nomaste\n");
        //break;

        case 2:
        printf("hiiii\n");
        break;

        case 3:
        printf("hello\n");

    }
    return 0; 
}