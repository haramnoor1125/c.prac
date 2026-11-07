#include<stdio.h>
int main(){
    
    int a = sizeof(signed int);
    int b = sizeof(unsigned int);
    int c = sizeof(long int);
    int d = sizeof(long long int);
    int e = sizeof(signed char);
    int f = sizeof(float);
    int g = sizeof(double);
    printf("~~%d~~~~%d~~~~%d~~~~%d~~~~%d~~~~%d~~~~%d~~",a,b,c,d,e,f,g);
    return 0;
}