#include <stdio.h>

/*
 * 编写一个文件在遇到EOF之前，把输入作为字符流读取。程序要打印每个输入的字符以及相应的ASCII十进制。
 * 注意：ASCII序列中，空格前面的字符都是非打印字符，要特殊处理这些字符
 * 如果非打印字符是换行符或者制表符，则分别打印\n或\t
 * 每次遇到换行符打印新的一行外，每行打印10对值
 */

int main(void)
{
    char input;
    int count = 0;
    printf("Please enter some information:\n");
    while ((input = getchar()) != EOF)
    {
        if (count++ == 10)
        {
            putchar('\n');
            count = 1;
        }
        if (input >= 32)
            printf("\'%c\' - %d   ",input,input);
        else if (input == '\n')
            printf("\\n - %d\n",input);
        else if (input == '\t')
            printf("\\t - %d   ",input);
        else
            printf("^%c - %d   ",input + 64,input);
    }
   
    return 0;
}

