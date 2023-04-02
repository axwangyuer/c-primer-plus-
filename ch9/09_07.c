#include <stdio.h>
#include <ctype.h>

/*
 * 编写一个函数，从标准输入中读取字符，直到遇到文件结尾。
 * 程序要报告每个字符是否是字母。如果是，还要报告字母在字母表中的数值位置
 * 合并一个函数，以一个字符作为参数，如果该字符时一个字母则返回一个数值的位置，否则返回-1
 */

char get_char(void);
int letter_place(char ch);

int main(void)
{
    char input;
    int output;
    printf("Please input some information:\n");
    while ((input = get_char()) != EOF)
    { 
        if (input == '\n')
            continue;
        output = letter_place(input);
        printf("%c is %d.\n",input,output);
    }

    return 0;
}

char get_char(void)
{
    char let;
    let = getchar();
    return let;
}

int letter_place(char ch)
{
    int result;
    char changes;
    if (isalpha(ch))
    {
        if (islower(ch))
            result = ch - 96;
        else
            result = ch - 64;
    }
    else
        result = -1;

    return result;

}