#include<stdio.h>
main(){
    int a = 20;
    int *b;
    b = &a;
    *b = *b + 10;
    printf("%d %d %d",a,b,*b);
}