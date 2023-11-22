#include <stdio.h>

int min3 (int a,int b, int c){
    if(a<=b && a<=c) return a;
    else if (b<=a && b<=c) return b;
    else return c;
}

int main(){
    int a,b,c;
    printf("请输入整数a:");
    scanf("%d",&a);
    printf("请输入整数b:");
    scanf("%d",&b);
    printf("请输入整数c:");
    scanf("%d",&c);

    printf("最小的整数是%d",min3(a,b,c));
    return 0;
    
}