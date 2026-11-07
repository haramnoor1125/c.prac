#include <stdio.h>
int main(){

    int categery,item;
    printf("press \n1 for Meetha \n2 for Namkeen: ");
    scanf("%d", &categery);

    switch(categery){
        case 1:
            printf("press \n1 for Rasgulla \n2 for Gulabjamun \n3 for Jalebi: ");
            scanf("%d",&item);

            if(item == 1)
                printf("Rasgulla");
        
            else if(item == 2)
                printf("Gulabjamun");

            else if(item == 3)
                printf("jalebi");

            else
                printf("Invalid Input");
            break;
        case 2:
            printf("press \n1 for Alubhujiya \n2 for Akash \n3 Haldiram: ");
            scanf("%d",&item);

            if(item == 1)
                printf("Alibhujiya");
            else if(item == 2)
                printf("Akash");
            else if(item == 3)
                printf("Haldiram");
            else
                printf("Invalid Input");
            break;

        default:
                printf("invalid input");
    }

    return 0;

}



       