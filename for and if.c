#include <stdio.h>
main(){
    int num,a=0,b=0;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++){
        if (i % 2 == 0){
            printf("짝수 : %d\n", i);
            a++;
        }
        else{
            printf("홀수 : %d\n", i);
            b++;
        }
    }
    printf("-----------\n");
    printf("짝수 : %d개\n홀수 : %d개\n", a, b);
    return 0;
}