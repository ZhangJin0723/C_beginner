#include <stdio.h>


unsigned rrotate(unsigned x,int n){
    return x>>n;
}

unsigned lrotate(unsigned x,int n){
    return x<<n;
}

int main(){
    unsigned a;
    int n;
    printf("请输入非负整数:");
    scanf("%u",&a);
    printf("请输入位移的位数：");
    scanf("%d",&n);

    printf("左移的结果是%u\n",lrotate(a,n));
    printf("右移的结果是%u",rrotate(a,n));

    return 0;
}