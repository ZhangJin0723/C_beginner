#include <stdio.h>

int main(){
    int no,i,num;

    do {
        printf("请输入一个正整数：");
        scanf("%d",&no);
        if (no<=0){
            printf("\a请不要输入非正整数。\n");
            } 
        }while(no<=0);

    num=no;

    while(no>0){
        i++;
        no /=10;
        
    }
    printf("%d的位数是%d。",num,i);

    return 0;



}