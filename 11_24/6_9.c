#include <stdio.h>

void rev_intary(int v[],int n){
    int i,temp=0;
    for(i=0;i<n/2;i++){
        temp=v[n-i-1];
        v[n-i-1]=v[i];
        v[i]=temp;
    }
}

int main(){
    int nums [5];
    int i;
    for(i=0;i<5;i++){
        printf("输入nums[%d]的值\n",i);
        scanf("%d",&nums[i]);
        
    }

    rev_intary(nums,5);

    printf("{");
    for(i=0;i<5;i++){
        printf("%d ",nums[i]);
    }
    printf("}");

    return 0;
}