#include <stdio.h>

int main(){
    int i,j,n;
    puts("让我们来画一个金字塔。");
    printf("金字塔有几层：");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=n-i;j>=0;j--){
            putchar(' ');
        }
        for(j=(i-1)*2+1;j>=1;j--){
            putchar('*');
        }
        putchar('\n');

    }
    return 0;


}