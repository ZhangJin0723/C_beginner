#include <stdio.h>

unsigned set_n(unsigned x,int pos,int n){
    int i;
    unsigned temp=0;
    for(i=1;i<=n;i++){
        temp+=1<<pos+n-i-1;
    }
    return x|temp;

}

unsigned reset_n(unsigned x,int pos,int n){
    int i;
    unsigned temp=0;
    for(i=1;i<=n;i++){
        temp+=1<<pos+n-i-1;
    }
    return x&~temp;
}

unsigned inverse_n(unsigned x,int pos,int n){
    int i;
    unsigned temp=0;
    for(i=1;i<=n;i++){
        temp+=1<<pos+n-i-1;
    }
    return x^temp;
}

int main(){
    unsigned num;
    int pos,n;
    printf("输入非负整数：");
    scanf("%u",&num);
    printf("输入要设定的位起点：");
    scanf("%d",&pos);
    printf("输入要设定的位数：");
    scanf("%d",&n);

    printf("第%d~%d位设为1后的值为%d\n",pos,pos+n-1,set_n(num,pos,n));
    printf("第%d~%d位设为0后的值为%d\n",pos,pos+n-1,reset_n(num,pos,n));
    printf("第%d~%d位取反后的值为%d\n",pos,pos+n-1,inverse_n(num,pos,n));

    return 0;
}