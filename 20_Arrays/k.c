#include <stdio.h>
int main(){

    int w[2][3] = {23,34,67,56,78,90};
    int v[2][3];
    int i , j;

     int size1 = sizeof(w) / sizeof(w[1]);
     int size2 = sizeof(w[0]) / sizeof(int);


    for(i = 0 ; i < size1 ; i++){
        for( j = 0 ; j < size2 ; j++){
            printf("%d " , w[i][j]);
        }
       printf("\n");
    }
    printf("\n--------------------------\n");

    for(i = 0 ; i < size1 ; i++){
        for( j = 0 ; j < size2 ; j++){
            v[i][j]=w[size1 - i -1][j];
        }
       printf("\n");
    }

    for(i = 0 ; i < size1 ; i++){
        for( j = 0 ; j < size2 ; j++){
            printf("%d " , v[i][j]);
        }
       printf("\n");
    }

    return 0;
}