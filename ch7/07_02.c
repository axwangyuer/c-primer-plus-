#include <stdio.h>
#define SPACE ' '

/*
 * 读取输入，读到#字符停止
 * 程序打印每个输入的字符以及对应的ASCII码（十进制）
 * 每行打印8个“字符-ASCII”组合
 */

int main(void)
{
    int row = 0;
    char letter;
    printf("Please input some information(# to quit):\n");
    while ((letter = getchar()) != '#')
    {
        if (letter != SPACE && letter != '\n' && letter != '\t')
        {
            row++;
            printf("%c-%d   ",letter,letter);
            if (row % 8 == 0)
                printf("\n");
        }   
    }
    printf("\n");
    return 0;
}