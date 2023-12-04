#include <stdio.h>

void put_count(void){
    static int count;
    count+=1;
    printf("put_count:第%d次\n",count);
}


int main(){

    put_count();
    put_count();

    return 0;

}