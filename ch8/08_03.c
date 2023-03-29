#include <stdio.h>
#include <ctype.h>

/*
 * 编写一个文件在遇到EOF之前，把输入作为字符流读取。
 * 该程序要报告输入中的大写字母和小写字母的个数
 * 假设大小写字母数值是连续的
 * 或者使用ctype.h库中合适的分类函数更方便
 */

int main(void)
{
    char input;
    int uppercase_letter = 0,lowercase_letter = 0;
    printf("Please enter some information:\n");
    while ((input = getchar()) != EOF)
    {
        if (islower(input))
            lowercase_letter++;
        else if (isupper(input))
            uppercase_letter++;
        else
            continue;
    }
    printf("uppercase letter:%d,lowercase letter:%d.\n",uppercase_letter,lowercase_letter);
    return 0;
}