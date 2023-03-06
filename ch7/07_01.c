#include <stdio.h>
#define SPACE ' '
#define CHANGES '\n'

/*
 * 读取输入，读到#字符停止
 * 报告读取的空格书，换行符和所有其他字符的数量
 */

int main(void)
{
    int letters = 0, blanks = 0, changes = 0;
    char let;
    printf("Please input some information(# to quit):\n");
    while ((let = getchar()) != '#')
    {
        if (let != SPACE && let != CHANGES)
            letters++;
        else if (let == SPACE)
            blanks++;
        else if (let == CHANGES)
            changes++;
        else
            printf("There is something wrong with program!\n");
    }
    printf("Your enter is %d letters,%d blanks,%d changes.\n",letters,blanks,changes);
    return 0;
}