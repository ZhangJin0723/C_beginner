#include <stdio.h>
#include <math.h>

int main(){
    int n;
    unsigned x;
    printf("请输入非负整数：");
    scanf("%u",&x);
    printf("请输入位移的位数：");
    scanf("%d",&n);

 
    printf("右移后是否溢出\n");
    (x/(pow(2,n))==x>>n)?printf("否\n"):printf("是\n");

    printf("左移后是否溢出\n");
    (x*(pow(2,n))==x<<n)?printf("否\n"):printf("是\n");

    return 0;
}

