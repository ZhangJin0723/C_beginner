#include <stdio.h>

int gcd(int x,int y){
    if(x!=y){
        while(x>y){
            x-=y;
        }
        if(x<y){
            int temp=x;
            x=y;
            y=temp;
        }
        return gcd(x,y);
    }else {
        return x;
    }
    
}


int main(){
    int x,y;
    printf("请输入x的值:");
    scanf("%d",&x);
    printf("请输入y的值:");
    scanf("%d",&y);

    printf("%d和%d的公约数为%d",x,y,gcd(x,y));

    return 0;
}