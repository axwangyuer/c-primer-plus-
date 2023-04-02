#include <stdio.h>

/*
 * 编写一个函数，接受三哥参数：一个字符两个整数
 * 字符参数时待打印的字符，第一个整数指定一行中打印字符的次数，第二个整数指定打印字符的行数
 */
void show_print(char ch, int t, int r);

int main(void)
{
    char input;
    int times,rows;
    int recognize;
    printf("Please enter a character,times and rows:\n");
    scanf("%c %d %d",&input,&times,&rows);
    show_print(input,times,rows);
    printf("Program done!\n");
    return 0;
}

void show_print(char ch, int t, int r)
{
        
    for (int a = 0; a < r; a++)
    {
        for (int b = 0; b < t; b++)
            printf("%c",ch);
        printf("\n");
    }
}