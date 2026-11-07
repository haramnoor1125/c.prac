#include <stdio.h>
int main() {

    int i , n;
    printf("entre a no: ");
    scanf("%d",&n);

    for(i=1 ; i<n;i++){
        if(i % 2 == 1){
            printf("%c",'A'+i-1);
        }else{
            printf("%d",i);
        }
    }
    return 0;
}