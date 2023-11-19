#include<stdio.h>

int main(){
    int grade[6][2];
    int stdsum[6]={0};
    int stdave[6]={0};
    int sum[2]={0};
    int ave[2]={0};
    int i,j;

    for(i=0;i<6;i++){
        
        printf("请输入学生%d的语文成绩:",i+1);
        scanf("%d",&grade[i][0]);
        printf("请输入学生%d的数学成绩:",i+1);
        scanf("%d",&grade[i][1]);
        
    }

    for(i=0;i<6;i++){
        stdsum[i]=grade[i][1]+grade[i][0];
        stdave[i]=stdsum[i]/2;
    }
    for(i=0;i<6;i++){
        for(j=0;j<2;j++){
        sum[j]+=grade[i][j];
        ave[j]=sum[j]/6;
        }
    }

    
    printf("语文总分是%d,平均分是%d.\n",sum[0],ave[0]);
    printf("数学总分是%d,平均分是%d.\n",sum[1],ave[1]);

    for(i=0;i<6;i++){
        printf("学生%d的总分是%d,平均分是%d.\n",i+1,stdsum[i],stdave[i]);
    }

    return 0;



}