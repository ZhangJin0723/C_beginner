#include <stdio.h>
#include <math.h>

int main(){
    int no;

    printf("请输入一个整数：");
    scanf("%d",&no);

    int i=1;
    while (pow(2,i)<no)
    {
        printf("%d ",(int)pow(2,i));
        i++;
    }printf("\n");
    
    return 0;
}