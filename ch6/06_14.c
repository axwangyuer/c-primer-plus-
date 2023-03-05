#include <stdio.h>
#define SIZE 8

/*
 * 创建两个包含8个元素的double类型数组
 * 使用循环提示用户为第一个数组输入8个值
 * 第二个数组元素的值设置为第一个数组元素对应的累积之和
 * 使用循环显示两个数组内容，第一个数组显示成一行，第二个数组显示在下一行，而且每个元素都与第一个数组各元素相对应
*/

int main(void)
{
    double fir_num[SIZE],sec_num[SIZE],total;
    int count,times;
    printf("Please input 8 numbers:");
    for(count = 0; count < SIZE; count++)
    {
        scanf("%lf",&fir_num[count]);
        printf("%9.2lf ",fir_num[count]);
    }
    printf("\n");
    for(count = 0; count < SIZE; count++)
    {
        for(times = 0,total = 0; times < count + 1; times ++)
        {
            total += fir_num[times];
        }
        sec_num[count] = total;
        printf("%9.2lf ",sec_num[count]);
    }
    printf("\n");
    return 0;
}