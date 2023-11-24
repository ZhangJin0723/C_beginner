#include <stdio.h>
#define NUM 6

void intary_rcpy (int v1[],const int v2[],int n){
    int i;
    if(n%2==0){
    for(i=0;i<n/2;i++){
        v1[n-1-i]=v2[i];
        v1[i]=v2[n-1-i];
    }}else{for(i=0;i<n/2;i++){
        v1[n-1-i]=v2[i];
        v1[i]=v2[n-1-i];
        }
        v1[(n-1)/2]=v2[(n-1)/2];
    
    }
   }

int main(){
    int nums1[NUM],nums2[NUM];
    int i;
    for(i=0;i<NUM;i++){
        printf("输入nums1[%d]的值\n",i);
        scanf("%d",&nums1[i]);
        
    }

    intary_rcpy(nums2,nums1,NUM);

    printf("{");
    for(i=0;i<NUM-1;i++){
        printf("%d ",nums2[i]);
    }
    printf("%d}",nums2[NUM-1]);

    return 0;
}