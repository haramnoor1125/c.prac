#include <stdio.h>
int y = 999;
void pro(){
    printf("%d",y);
}
int main(){
    printf("%d\n",y);
    pro();
    return 0;
}