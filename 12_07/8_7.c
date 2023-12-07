#include <stdio.h>
int combination(int n,int r){
    if(n < 0 || r < 0 || r > n){
        return 0;
    }
    if(r>1){
        return combination(n-1,r-1)+combination(n-1,r);
    }else if(r==1){
        return n;
    }else{  
        return 1;
    }
}

int main(){
    int n,r;
    printf("请输入n的值");
    scanf("%d",&n);
    printf("请输入r的值");
    scanf("%d",&r);

    printf("C%d %d的值为%d\n",n,r,combination(n,r));

    return 0;
}
