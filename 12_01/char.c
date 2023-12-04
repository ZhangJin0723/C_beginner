#include <stdio.h>
#include <limits.h>

int main(){
    printf("char型是:");

    if(CHAR_MIN){
        printf("有符号的。\n");
    }else{
        printf("无符号的。\n");
    }
    return 0;
}