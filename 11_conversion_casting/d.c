#include<stdio.h>
int main(){
    short x = 'a';
    float y = 45;
    int z = 34.6f;
    printf("%d %f %d\n",x,y,z);
    printf("%d %f %d",sizeof(x),sizeof(y),sizeof(z));
    return 0;
}

