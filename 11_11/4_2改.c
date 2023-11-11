#include <stdio.h>

int main(){
    int start,end,sum,i;
    puts("请输入两个整数。");
    printf("整数A:"); scanf("%d",&start);
    printf("整数B:"); scanf("%d",&end);
    if (start>end){
        int temp;
       temp=start;
       start=end;
       end=temp;
       }
    i=start;
    do {
        sum=sum+i;
        i=i+1;
    }while(i<=end);
    printf("大于等于%d小于等于%d的所有整数的和是%d\n",start,end,sum);
    return 0;
}