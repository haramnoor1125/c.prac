#include <stdio.h>

int main() {
    int categery, item;

    printf("1 for Meetha, 2 for Namkeen: ");
    scanf("%d", &categery);

    if(categery == 1){ 
        printf("1 Rasgulla, 2 Gulabjamun, 3 Jalebi: ");
        scanf("%d", &item);
        if(item == 1){
            printf("Rasgulla");
        }
        else if(item == 2){
            printf("Gulabjamun");

        }
        else if(item == 3){
            printf("Jalebi");
        }
        else{
            printf("Invalid Input");
        }
    }else if(categery == 2){        
        printf("1 Alubhujia, 2 Akash, 3 Haldiram: ");
        scanf("%d", &item);
        if(item == 1){
            printf("Alubhujia");
        }
        else if(item == 2){
            printf("Akash");
        }
        else if(item == 3){
            printf("Haldiram");
        }
        else{
            printf("Invalid Input");
        }

    }else{
        printf("invalid");
    }
    

    return 0;
}