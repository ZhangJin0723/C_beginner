#include <stdio.h>

int main(){
    int n,i1,i2,d,e;

    do {
        printf("请输入一个正整数：");
        scanf("%d",&n);
        if (n<=0){
            printf("\a请不要输入非正整数。\n");
            } 
        }while(n<=0);
    
    d=n/10;
    e=n%10;

    for(i1=1;i1<=d;i1++){
        printf("1234567890");
    }
    for(i2=1;i2<=e;i2++){
        printf("%d",i2);
    }


       

    return 0;

    

}