#include <stdio.h>
#include <math.h>

unsigned set(unsigned x,int pos){
    return x|(1<<pos-1);

}

unsigned reset(unsigned x,int pos){
    return x&~(1<<pos-1);
}

unsigned inverse(unsigned x,int pos){
    return x^(1<<pos-1);
}

int main(){
    unsigned num;
    int n;
    printf("输入非负整数：");
    scanf("%u",&num);
    printf("输入要设定的位数：");
    scanf("%d",&n);

    printf("第%d位设为1后的值为%d\n",n,set(num,n));
    printf("第%d位设为0后的值为%d\n",n,reset(num,n));
    printf("第%d位取反后的值为%d\n",n,inverse(num,n));

    return 0;
}