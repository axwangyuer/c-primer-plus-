#include <stdio.h>

/*
 * 使用嵌套循环，按照一定的格式打印字符
 */

int main(void)
{
    int column,row;
    char letter;
    for(column = 1,letter = 'A'; column <= 6; column++)
    {
        for(row = 0; row < column; row++,letter++)
        {
            printf("%c",letter);
        }
        printf("\n");
    }
    return 0;
}