#include <stdio.h>

int main(){
    int a,b,c=0,sum;
    puts("请输入两个整数。");
    printf("整数A:"); scanf("%d",&a);
    printf("整数B:"); scanf("%d",&b);
    if (a>=b) 
    {do {
        sum=0;c=b;
        c=c+1;
        sum=b+c;  
    }while(c<=a); 
    printf("大于等于%d小于等于%d的所有整数的和是%d\n",b,a,sum);}
    else 
    {do {
        sum=0;c=a;
        c=c+1;
        sum=a+c;
    }while (c<=b);
    printf("大于等于%d小于等于%d的所有整数的和是%d\n",a,b,sum);
    }
    return 0;


}