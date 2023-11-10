#include <stdio.h>

int main(){
    int a,b,c;
    printf("请输入三个整数。\n");
    printf("整数A:");
    scanf("%d",&a);
    printf("整数B:");
    scanf("%d",&b);
    printf("整数C:");
    scanf("%d",&c);
    if (a<b && a<c) printf("最小值为%d",a);
    else if (b<a && b<c) printf("最小值为%d",b);
    else printf("最小值为%d",c);
    return 0;

}