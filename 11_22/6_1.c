#include<stdio.h>

int min2(int a,int b){
    if(a>=b){
        return b;
    }else return a;
    
}


int main(){
    int a,b;
    printf("请输入整数a:");
    scanf("%d",&a);
    printf("请输入整数b:");
    scanf("%d",&b);

    printf("较小的整数是%d",min2(a,b));

    return 0;

}