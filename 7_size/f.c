#include <stdio.h>
int main() {
    char a = 'c';
    int b = 54.6L;
    char c[] = "noor";
    printf("%d %d %d\n",sizeof(a),sizeof(b),sizeof(c));
    printf("%c %d %s",a,b,c);
    return 0;
}