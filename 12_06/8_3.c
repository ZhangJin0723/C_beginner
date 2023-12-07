#include<stdio.h>

#define swap(type,a,b) {int temp;temp=a;a=b;b=temp;}

int main(){
    int x=5,y=10;
    swap(int,x,y);

    printf("%d  %d",x,y);
    return 0;
}