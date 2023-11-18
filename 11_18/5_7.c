#include<stdio.h>
#define NUM 100

int main(){
    int i;
    int x[NUM];
    int num;

    printf("数据个数:");
    scanf("%d",&num);

    for(i=0;i<num;i++){
        printf("%d号:",i+1);
        scanf("%d",&x[i]);
    }

    printf("{");
    for(i=0;i<num-1;i++){
        printf("%d,",x[i]);
    }
    printf("%d}",x[num-1]);

    return 0;

}
