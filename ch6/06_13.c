#include <stdio.h>
#define SIZE 8

/*
 * 创建一个包含8个元素的int类型数组
 * 分别把数组元素设置为2的前8次幂
 * 使用for循环设置数组元素的值
 * 用do while循环显示数组元素的值
 */

int main(void)
{
    int number[SIZE];
    int count,num;
    for (count = 0,num = 2; count < SIZE; count++)
    {
        number[count] = num;
        num = num * 2;
    }
    count = 0;
    do
    {
        printf("%d ",number[count++]);
    } while(count < SIZE);
    printf("\n");
    return 0;
}