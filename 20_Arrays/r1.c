#include <stdio.h>
#include <string.h>

int main() {

    char x[] = "vishwajeet"; // arr length 10 and string length is also 10
    int i;

    int arr_len = sizeof(x);
    int str_len = strlen(x);
    
    printf("%d - %d", arr_len, str_len);

    return 0;
}
