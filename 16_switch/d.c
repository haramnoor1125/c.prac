#include <stdio.h>
int main(){

    int categery,item;
    printf("press \n1 for Meetha \n2 for Namkeen: ");
    scanf("%d", &categery);

    if(categery==1){
        printf("press \n1 for Rasgulla \n2 for Gulabjamun \n3 for Jalebi:");
        scanf("%d",&item);
        switch(item){
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
    }else if(categery==2){
            printf("press \n1 for Alubhujiya \n2 for Akash \n3 Haldiram: ");
            scanf("%d",&item);
        switch(item){
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
    }else{
         printf("Invalid input");
    }

    return 0;

}



       