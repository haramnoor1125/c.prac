#include<stdio.h>

void pro(){


    printf("pro()---->%d",t);
}
int t = 889;
int main(){
    pro();
    printf("%d\n",t);
    return 0;
}

// line error: 't' undecleard