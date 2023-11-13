#include <stdio.h>

int main(){
    int no;
    printf("正整数：");
    scanf("%d",&no);

    while (no>0){
        putchar('+');
        no--;
       if(no-->0){
            putchar('-');
        }
    }
    printf("\n");

    return 0;
}