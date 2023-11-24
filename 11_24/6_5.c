#include <stdio.h>

int sumup (int n){
    int sum=0,i;
    for(i=0;i<=n;i++){
        sum+=i;
    }
    
    return sum;
}

int main(){
    int a;
    printf("输入大于一的整数：");
    scanf("%d",&a);
    printf("1到%d之间所有整数的和是%d",a,sumup(a));

    return 0;
}