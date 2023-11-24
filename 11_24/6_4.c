#include <stdio.h>

int sqr(int x){
    return x*x;
}

int pow4(int x){
    return sqr(sqr(x));
}

int main(){
    int a;
    printf("输入整数：");
    scanf("%d",&a);
    printf("%d的四次幂是%d",a,pow4(a));

    return 0;
}