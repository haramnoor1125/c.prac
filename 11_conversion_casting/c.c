#include<stdio.h>
int main(){
    long long a = 456;
    //int x = sizeof(a + 56);
    int x = sizeof(a + 56 + 45.6f);
    printf("%d",x);
    return 0;
}

