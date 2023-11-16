#include<stdio.h>

int main(){
    int n,sum,i;
    printf("n的值:");
    scanf("%d",&n);

    for (i=1;i<=n;i++){
        sum=sum+i;

    }
    printf("从1到%d的和为%d",n,sum);

    return 0;

}