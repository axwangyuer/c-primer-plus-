#include <stdio.h>
#include <ctype.h>
#define SPACE ' '

/*
 * 编写一个文件在遇到EOF之前，把输入作为字符流读取。
 * 该程序要报告每个单词的字母数，不要吧空白统计为单词的字母，标点符号也不要
 */

int main(void)
{
    char input;
    int count = 0;
    printf("Please enter some information:\n");
    while ((input = getchar()) != EOF)
    {
        if (isalpha(input))
        {
            count++;
            putchar(input);
        }
        else if (ispunct(input))  
        {   
            if (count == 0)
                continue;
            else
            {
                printf(":%d   ",count);
                count = 0;
            }
            
        }
        else
        {
            if (count == 0)
                continue;
            else
            {
                printf(":%d   ",count);
                count = 0;
            }
        } 
    }

    return 0;
}