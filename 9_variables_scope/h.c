#include<stdio.h>

void pro()
    int t = 889;
    printf("pro()---->%d",t);

int main(){
    pro();
    printf("%d\n",t);
    return 0;
}

// line error: 't' undecleard