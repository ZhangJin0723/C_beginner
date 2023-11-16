#include<stdio.h>

int main(){
    int n,i,j;
    printf("生成一个正方形\n");
    printf("正方形有几层:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            putchar('*');
        }
        printf("\n");
    }
    return 0;
}