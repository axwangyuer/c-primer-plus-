#include <stdio.h>

/*
 * 使用嵌套循环，按照一定的格式打印字符
 */

int main(void)
{
    int column,row;
    for (column = 1; column <=5; column++)
    {
        for (row = 0; row < column; row++)
        {
            printf("$");
        }
        printf("\n");
    }
    return 0;
}