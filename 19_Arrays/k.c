#include <stdio.h>
int main() {
    int y[100] = {5.5f , 9.9f};
    int i;

    for(i = 0 ; i < 100 ; i++){
        printf("%.1f\n" , y[i]);
    }

    return 0;
}