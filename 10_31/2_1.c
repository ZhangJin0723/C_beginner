#include <stdio.h>

int main(){
    int a,b;
    puts("请输入两个整数。");
    printf("整数1:");
    scanf("%d",&a);
    printf("整数2:");
    scanf("%d",&b);
    int c=100*a/b;
    printf("x的值是y的%d%%",c);
    return 0;

}