#include <stdio.h>

int main(){
    int height;
    printf("请输入您的身高：");
    scanf("%d",&height);
    double weight=(height-100)*0.9;
    printf("您的标准体重是%3.1f公斤。",weight);
    return 0;

}