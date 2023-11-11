#include <stdio.h>

int main(){
    int start, end, i, sum; // 定义变量
    puts("请输入两个整数。");
    printf("整数A:"); scanf("%d", &start); // 输入第一个整数
    printf("整数B:"); scanf("%d", &end); // 输入第二个整数
    if (start > end){ // 如果第一个整数大于第二个整数，交换它们的值
        int temp = start;
        start = end;
        end = temp;
    }
    sum = 0; // 初始化和为0
    i = start; // 初始化i为start
    do {
        sum = sum + i; // 累加每个整数到和
        i++; // i自增1
    } while (i <= end); // 当i小于等于end时重复循环
    printf("大于等于%d小于等于%d的所有整数的和是%d\n", start, end, sum); // 输出结果
    return 0;
}
