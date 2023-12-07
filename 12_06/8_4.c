#include <stdio.h>
#define NUM 5

void sort(int a[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=n-1;j>i;j--){
            if(a[j-1]<a[j]){
                int temp;
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;

            }
        }
    }
}

int main(){
    int a[NUM];
    int i;

    for(i=0;i<NUM;i++){
        printf("请输入整数%d:",i+1);
        scanf("%d",&a[i]);
    }

    sort(a,NUM);

    for(i=0;i<NUM;i++){
        printf("%d\n",a[i]);
    }
    
    return 0;
}
