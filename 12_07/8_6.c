#include <stdio.h>

int factorial(int n){
    int i,a=1;
    for(i=n;i>0;i--){
        a*=i;

    }
    return a;
}


int main(){
    int n;
    printf("请输入整数n:");
    scanf("%d",&n);

    printf("%d的阶乘是%d",n,factorial(n));

    return 0;
}