#include<stdio.h>

int main(){
    int length,width,i,j;
    printf("让我们来画一个长方形。\n");
    printf("一边:");
    scanf("%d",&length);
    printf("另一边:");
    scanf("%d",&width);

    if(length<width){
        int temp;
        temp=length;
        length=width;
        width=temp;
    }

    for(i=1;i<=width;i++){
        for(j=1;j<=length;j++){
            putchar('*');
        } 
        printf("\n");
    }
    return 0;

}