#include <stdio.h>

int main(){
    static double a[5];
    int i;

    for(i=0;i<5;i++){
        printf("a[%d] = %.1f\n",i,a[i]);
    }

    return 0;
}