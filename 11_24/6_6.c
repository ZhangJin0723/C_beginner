#include <stdio.h>

void alert (int n){
    while(n-->=0){
        printf("\a");
    }
}

int main(){
    int a;
    printf("输入正整数：");
    scanf("%d",&a);
    alert(a);
    return 0;

}