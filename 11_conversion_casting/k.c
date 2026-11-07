#include <stdio.h>
void pro(){
    printf("+++++++++++++++\n");
}
int main() {
    printf("%d",sizeof(pro()));
    printf("\n++++++");
    return 0;
}