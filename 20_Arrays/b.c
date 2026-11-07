#include <stdio.h>
int main(){

    int w[2][3] , i ,j;

     int size1 = sizeof(w) / sizeof(w[1]);
     int size2 = sizeof(w[0]) / sizeof(int);


    for(i = 0 ; i < size1 ; i++){
        for( j = 0 ; j < size2 ; j++){
            printf("%d\n" , w[i][j]);
        }
       printf("\n");
    }
    printf("\n--------------------------\n");

    for(i = 0 ; i < size1 ; i++){
        for( j = 0 ; j < size2 ; j++){
            printf("Enter a next value: ");
            scanf("%d" , &w[i][j]);
        }
       printf("\n");
    }

    for(i = 0 ; i < size1 ; i++){
        for( j = 0 ; j < size2 ; j++){
            printf("%d\n" , w[i][j]);
        }
       printf("\n");
    }

    return 0;
}