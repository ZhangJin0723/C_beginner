#include <stdio.h>

int min_of(const int v[],int n){
    int min=v[0];
    int i;
    for(i=1;i<n;i++){
        if(v[i]<min) min=v[i];
    }

    return min;
}

int main(){
    int nums [5];
    int i;
    for(i=0;i<5;i++){
        printf("输入nums[%d]的值\n",i);
        scanf("%d",&nums[i]);
        
    }

    printf("数组中的最小值为%d",min_of(nums,5));

    return 0;
}