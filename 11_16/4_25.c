#include<stdio.h>

int main(){
    int i,j,n;
    puts("让我们来画一个向下的金字塔。");
    printf("金字塔有几层：");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=i-1;j>=1;j--){
            putchar(' ');
        }
        for(j=(n-i+1)*2-1;j>=1;j--){
            printf("%1d",i%10);
        }
        printf("\n");
    }

    return 0;


}