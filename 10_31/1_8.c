#include <stdio.h>

int main() {
    int a,b;
    puts("请输入两个整数。");
    puts("整数1:");
    scanf("%d",&a);
    puts("整数2:");
    scanf("%d",&b);
    printf("它们的乘积是%d\n",a*b);
    return 0;
}