#include <stdio.h>

int main(){
    int a,b;
    puts("请输入两个整数。");
    printf("整数A:");
    scanf("%d",&a);
    printf("整数B:");
    scanf("%d",&b);
    if (a>b&&a-b<=10||a<b&&b-a<=10) {puts("它们的差小于等于10。");}
    else puts("它们的差大于等于11。");

    return 0;
}