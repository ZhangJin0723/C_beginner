#include <stdio.h>

int main(){
    int retry=0;
    do {
        int no;
        printf("请输入一个整数:");
        scanf("%d",&no);
        if (no==0) puts("该整数为0。");
        else if (no>0) puts("该整数为正数。");
        else puts("该整数为负数。");

        printf("是否继续。[是...0/否...1]\n");
        scanf("%d",&retry);
    }while(retry==0);

    return 0;

}