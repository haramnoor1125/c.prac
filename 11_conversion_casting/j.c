#include <stdio.h>
int add(int a,int b) {
    printf("++++++++++++\n");
    return a+b;
}
int main(){
   // printf("%d",add(3,6));
    printf("%d",sizeof(add(3,6)));
    return 0;
}

