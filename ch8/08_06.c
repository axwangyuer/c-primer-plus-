#include <stdio.h>
#define SPACE ' '

char get_first(void);

/*
 * 修改程序清单8.8中的get_first（）函数
 * 让该函数返回读取的第一个非空白字符，并在一个简单的程序中测试
 */

int main(void)
{
    char input;
    printf("Please enter some character:\n");
    input = get_first();
    printf("%c is the first none blank character!\n",input);
    printf("Bye.\n");
    return 0;
}



char get_first(void)
{
    char ch;
    while ((ch = getchar()) != EOF)
    {
        if (ch == '\n' || ch  == SPACE || ch == '\t')
            continue;
        else
            break;
    }
    return ch;
}

