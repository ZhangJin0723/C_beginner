#include <stdio.h>

int cube(int x){
    return x*x*x;
}

int main(){
    int a;
    printf("请输入一个整数：");
    scanf("%d",&a);
    printf("%d的立方是%d",a,cube(a));
    return 0;
}