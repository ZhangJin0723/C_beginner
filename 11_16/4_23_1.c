#include<stdio.h>

int main(){
    int i,j,len;
    puts("生成直角在左上方的等腰直角三角形。");
    printf("短边：");
    scanf("%d",&len);

    for(i=1;i<=len;i++){
        for(j=len-i+1;j>=1;j--){
            putchar('*');
        }printf("\n");
    }
    return 0;
}