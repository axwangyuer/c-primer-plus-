#include <stdio.h>
#define SPACE ' '

/*
 * 设计一个程序，统计在读到文件结尾之前读取的字符数
 */

int main(void)
{
    char input;
    int count = 0;
    printf("Please enter some character:\n");
    while ((input = getchar()) != EOF)
        count++;
    printf("the total character is %d.\n",count);
    return 0;
}
