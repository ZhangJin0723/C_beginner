#include <stdio.h>

#define max(x,y) (((x)>(y))? (x):(y))

int main(){
    int a,b,c,d;
    printf("输入a的值:");
    scanf("%d",&a);
    printf("输入b的值:");
    scanf("%d",&b);
    printf("输入c的值:");
    scanf("%d",&c);
    printf("输入d的值:");
    scanf("%d",&d);

    printf("%d\n",max(max(a,b),max(c,d)));
    printf("%d\n",max(max(max(a,b),c),d));

    return 0;

}