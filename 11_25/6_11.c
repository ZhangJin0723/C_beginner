#include <stdio.h>
#define FAILED -1
#define NUM 7

int search_idx(const int v[],int idx[],int key,int n){
    int i=0;
    int count=0;
    while(i<n){
        if(v[i]==key){
            idx[count]=i;
            count++;
        }
        i++;
    }
    if(count==0) return FAILED;
            else return count;
}

int main(){
    int nums[NUM],idx[NUM];
    int i,key,result;
    for(i=0;i<NUM;i++){
        printf("输入nums[%d]的值:",i);
        scanf("%d",&nums[i]);
    
    }

    printf("输入要查找的值：");
    scanf("%d",&key);

    result=search_idx(nums,idx,key,NUM);

    if(result!=FAILED){
        printf("有%d个值为%d.\n",result,key);
        for(i=0;i<result;i++){
            printf("%d ",idx[i]);
        }
    }else {printf("没有找到%d",key);}
  

    

    return 0;
}

