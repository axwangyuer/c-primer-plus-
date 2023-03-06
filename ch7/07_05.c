#include <stdio.h>
#define SPACE ' '

/*
 * 使用switch，读到#为止。
 * 用感叹号替换句号，用两个感叹号替换感叹号
 * 报告进行了多少次替换
 */

int main(void)
{
    int count = 0;
    char letter;
    printf("Please input some information(# to quit):\n");
    while ((letter = getchar()) != '#')
    {
        switch (letter)
        {
            case '.': printf("!");
                      count++;
                      break;
            case '!': printf("!!");
                      count++;
                      break;
            default : printf("%c",letter);
        }    
    }
    printf("%d changes!\n",count);
    return 0;
}