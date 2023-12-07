#include <stdio.h>

int main(){
    double a;
    float b;
    long double c;

    printf("输入double型的值:");
    scanf("%lf",&a);
    printf("输入float型的值:");
    scanf("%f",&b);
    printf("输入long double型的值:");
    scanf("%Lf",&c);

    printf("a:%lf\n",a);
    printf("b:%f\n",b);
    printf("c:%Lf\n",c);

    return 0;
}