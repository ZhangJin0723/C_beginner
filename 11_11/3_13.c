#include<stdio.h>

int main(){
    int month;
    printf("请输入月份：");
    scanf("%d",&month);
    switch (month){
        case 12:
        case 1:
        case 2: printf("%d月是冬季。\n",month); break;
        case 3:
        case 4:
        case 5:printf("%d月是春季。\n",month); break;
        case 6:
        case 7:
        case 8:printf("%d月是夏季。\n",month); break;
        case 9:
        case 10:
        case 11:printf("%d月是秋季。\n",month); break;
        default: printf("%d月不存在。\n",month); break;
    }
    return 0;
}