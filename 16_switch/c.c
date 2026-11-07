#include <stdio.h>
int main(){

    int n;
    printf("press \n1 for Meetha \n2 for Namkeen: ");
    scanf("%d", &n);


    switch(n){
        case 1:
        printf("press \n1 for Rasgulla \n2 for Gulabjamun \n3 for Jalebi: ");
        scanf("%d",&n);
        switch(n){
            case 1:
            printf("Rasgulla");
            break;

            case 2:
            printf("Gulabjamun");
            break;

            case 3:
            printf("Jalebi");
            break;

            default:
            printf("Invalid Input"); 
        }


        break;

        case 2:
        printf("press \n1 for Alubhujiya \n2 for Akash \n3 Haldiram: ");
        scanf("%d",&n);
        switch(n){
            case 1:
            printf("Alibhujiya");
            break;

            case 2:
            printf("Akash");
            break;

            case 3:
            printf("Haldiram");
            break;

            default:
            printf("Invalid Input");
        }

        break;
    }
    return 0;
}