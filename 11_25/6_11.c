#include <stdio.h>
#define FAILED -1
#define NUM 7

int j=0;

int search_idx(const int v[],int idx[],int key,int n){
    int i=0;
    while(i<n){
        if(v[i]==key){
            idx[j]=i;
            j++;
        }
        i++;
    }
    if(j==0) return FAILED;
            else return j;
}

int main(){
    int nums[NUM],idx[NUM];
    int i,key;
    for(i=0;i<NUM;i++){
        printf("输入nums[%d]的值:",i);
        scanf("%d",&nums[i]);
    
    }

    printf("输入要查找的值：");
    scanf("%d",&key);


    if(j!=0){
        printf("有%d个值为%d.\n",search_idx(nums,idx,key,NUM),key);

        for(i=0;i<j;i++){
            printf("%d",idx[i]);
        }
    }else{
        printf("没有找到%d",key);
    }


    

    return 0;
}

