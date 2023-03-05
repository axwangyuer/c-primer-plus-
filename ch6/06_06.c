#include <stdio.h>

/*
 * 打印一个表格，每一行打印一个整数，该数的平方，该数的立方
 * 要求用户输入表格的上下限。使用一个for循环
 */

int main(void)
{
    int high_limit,low_limit,column;
    printf("Please input the highest limits of exile:");
    scanf("%d",&high_limit);
    printf("Please input the lowest limits of exile:");
    scanf("%d",&low_limit);
    printf("number    square    cube\n");
    for(column = low_limit; column <= high_limit; column++)
    {
        printf("%-10d%-10d%-10d\n",column,column * column,column * column * column);
    }
    return 0;
}