#include<stdio.h>
#define NUM 100

int main(){
    int i,j;
    int num;
    int grade[NUM];
    int fenbu[11]={0};
    int max;

    printf("请输入学生人数：");

    do{
        scanf("%d",&num);
        if(num<1||num>NUM){
            printf("请输入1~%d的数:");
        }
    }while(num<1||num>NUM);

    printf("请输入%d人的分数。\n",num);

    for(i=0;i<num;i++){
        printf("%2d号:",i+1);
        do{
            scanf("%d",&grade[i]);
            if(grade[i]<0||grade[i]>100){
                printf("请输入1~100的数:");
            }
        }while(grade[i]<0||grade[i]>100);
        fenbu[grade[i]/10]++;
    }

//找人数最多的分数区间    
    max=fenbu[0];
    for(i=0;i<=10;i++){
        if(max<fenbu[i]){max=fenbu[i];
        }
    }
//判断某区间人数与行数的关系，若人数足够，输出“*”；若不够，输出“ ”
    for(i=1;i<=max;i++){
        for(j=0;j<=10;j++){
            if(fenbu[j]>=max+1-i){
                printf("  *  ");
            }else if(fenbu[j]<max+1-i){
                printf("     ");
            }
        }
        printf("\n");
    }

    printf("---------------------------------------------------------\n");

    for(i=0;i<=10;i++){
        printf(" %3d ",i*10);
    }

    printf("\n");

    return 0;    
    
    
    
    
    
    
    
    }




