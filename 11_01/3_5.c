#include <stdio.h>
int main(){
    int a;
    printf("请输入a的值:");
    scanf("%d",&a);
    printf("表达式a==0的值为%d\n",a==0);
    int b;
    printf("请输入b的值:");
    scanf("%d",&b);
    printf("表达式b>0的值为%d\n",b>0);
    return 0;
}