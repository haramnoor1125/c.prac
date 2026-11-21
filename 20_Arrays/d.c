#include <stdio.h>
int main(){

    int w[2][3] = {{22,5,23}, {33,6,43}};
    int i , j; 

    int size1 = sizeof(w) / sizeof(w[1]);
    int size2 = sizeof(w[0]) / sizeof(int);


    for(i = 0 ; i < size1 ; i++){
        for( j = 0 ; j < size2 ; j++){
            printf("%d " , w[i][j]);
        }
        printf("\n");
    }    

      


    return 0;
}