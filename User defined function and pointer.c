#include <stdio.h>
void func(int *i int *j);

main(){
    int a = 3, b = 12;
    func(&a, &b);
    printf("%d %d\n",a,b);
}
void func(i,j)
int *i, *j;
{
    *i *=3;
    *j /=3;
    printf("%d, %d\n", *i, *j);
}