#include <stdio.h>
int main(){
    int a , b;
    char op;
    printf("Enter two Numbers: ");
    scanf("%d %d" , &a,&b);

    fflush(stdin);

    printf("Enter \n+ for Addition\n- for Subtraction \n* for Multiplication \n/ for Division: ");
    scanf("%c", &op);

    switch(op){
        case '+':
        printf("%d + %d = %d",a ,b , a+b);
        break;

        case '-':
        printf("%d - %d = %d",a ,b , a-b);
        break;

        case '*':
        printf("%d * %d = %d",a ,b , a*b);
        break;

        case '/':
        printf("%d / %d = %d",a ,b , a/b);
        break;

        default:
        printf("Invalid input");
    
    }
    return 0;
}