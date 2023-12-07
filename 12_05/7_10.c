#include <stdio.h>


int main(){
    int i;
    float x,y=0;

    for(i=0;i<=100;i++){
        x=i/100.0;
        printf("x = %f  x = %f\n",y,x);
        y+=0.01;
    
    }

    return 0;
}