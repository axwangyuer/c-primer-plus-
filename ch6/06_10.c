#include <stdio.h>

/*
 * 要求用户输入一个上限整数和一个下限整数
 * 计算从上限道下限范围内所有整数的平方和，并显示计算结果
 * 然后继续提示，直到用户输入的上限整数等于或小于下限整数为止
 */

int main(void)
{
    int upper_num,lower_num,sums;
    printf("Enter lower and upper integer limits:");
    scanf("%d %d",&lower_num,&upper_num);
    while (upper_num > lower_num)
    {
        int first_num = lower_num;
        for (sums = 0; upper_num >= lower_num; lower_num++)
        {
            sums += lower_num * lower_num;
        }
        printf("The sums of the squares from %d to %d is %d\n",first_num * first_num,upper_num * upper_num,sums);
        printf("Enter next set of limits:");
        scanf("%d %d",&lower_num,&upper_num);
    }
    printf("\n");
    return 0;
}