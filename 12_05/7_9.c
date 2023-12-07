#include <stdio.h>
#include <math.h>

int main(){
    float S;
    printf("请输入正方形的面积:");
    scanf("%f",&S);

    printf("面积为%f的正方形边长为%f\n",S,sqrt(S));

    return 0;
}