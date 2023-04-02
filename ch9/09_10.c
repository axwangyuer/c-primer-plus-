#include <stdio.h>

/*
 * 编写一个to_base_n()函数接受两个参数
 * 第二个参数在2～10范围内，然后第2个参数中指定的紧致打印1个参数的数值
 */

void to_base_n(int a, int b);

int main(void)
{
    int num,times;
    printf("Please input a number:\n");
    scanf("%d",&num);
    printf("Please enter the base system(2~10):\n");
    scanf("%d",&times);
    to_base_n(num, times);
    printf("\n");
    return 0;
} 

void to_base_n(int a, int b)
{
    int r;          //进制使用取余法
    r = a % b;
    if (a >= b)
        to_base_n(a / b, b);
    printf("%d",r);

}