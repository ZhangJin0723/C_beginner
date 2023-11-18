#include<stdio.h>
#define NUM 100

int main(){
    int i,j;
    int num;
    int grade[NUM];
    int fenbu[11]={0};

    printf("请输入学生人数：");

    do{
        scanf("%d",&num);
        if(num<1||num>NUM){
            printf("请输入1~%d的数:");
        }
    }while(num<1||num>NUM);

    printf("请输入%d人的分数。\n",num);

    for(i=0;i<num;i++){
        printf("%2d号",i+1);
        do{
            scanf("%d",&grade[i]);
            if(grade[i]<0||grade[i]>100){
                printf("请输入1~100的数:");
            }
        }while(grade[i]<0||grade[i]>100);
        fenbu[grade[i]/10]++;
    }

    puts("---分布图---");
    for(i=0;i<=9;i++){
        printf("%2d~%2d:",i*10,i*10+9);
        for(j=0;j<fenbu[i];j++){
            putchar('*');
        }
        printf("\n");
    }

    printf("  100:");
    for(j=0;j<fenbu[10];j++){
        putchar('*');
    }
    printf("\n");

    return 0;
}