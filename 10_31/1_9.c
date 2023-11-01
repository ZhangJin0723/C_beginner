#include <stdio.h>

int main() {
    int a,b,c;
    puts("请输入两个整数。");
    puts("整数1:");
    scanf("%d",&a);
    puts("整数2:");
    scanf("%d",&b);
    puts("整数3:");
    scanf("%d",&c);
    printf("它们的和是%d\n",a+b+c);
    return 0;
}