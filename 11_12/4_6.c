#include <stdio.h>

int main(){
    int no;
    
    printf("请输入一个整数：");
    scanf("%d",&no);

    int i=1;
    while(i<=no/2){
        printf("%d ",i*2);
        i++;
    } printf("\n");

    return 0;
}