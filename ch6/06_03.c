#include <stdio.h>

/*
 * 使用嵌套循环，按照一定的格式打印字符
 * 不使用ASCII
 */

int main(void)
{
    char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int column,row,num;
    char letter;
    for(column = 1; column <= 6; column++)
    {
        for(row = 0,num = 5; row < column; row++,num--)
        {
            letter = lets[num];
            printf("%c",letter);
        }
        printf("\n");
    }
    return 0;
}