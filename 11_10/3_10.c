#include <stdio.h>

int main(){
    int a,b,c;
    puts("请输入三个整数。");
    printf("整数A:");
    scanf("%d",&a);
    printf("整数b:");
    scanf("%d",&b);
    printf("整数C:");
    scanf("%d",&c);
    if (a==b && a==c) {puts("三个值都相等。");}
    else if (a==b|| a==c ||b==c) {puts("有两个值相等。");}
    else puts("三个值各不相同。");

    return 0;
}