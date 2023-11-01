#include <stdio.h>

int main(){
    int a,b;
    printf("请输入两个整数。\n");
    printf("整数1:");
    scanf("%d",&a);
    printf("整数2:");
    scanf("%d",&b);
    printf("a是b的%3.2f%%",(double)a*100/b);
    return 0;

}