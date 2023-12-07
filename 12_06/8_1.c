#include <stdio.h>

#define diff(x,y) (x-y)

int main(){
    int x,y;
    printf("输入x的值:");
    scanf("%d",&x);
    printf("输入y的值:");
    scanf("%d",&y);

    printf("x,y的差是%d\n",diff(x,y));

    return 0;
}