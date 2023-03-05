#include <stdio.h>
#include <string.h>

/*
 * 把一个单词读入一个字符数组中，然后倒序打印这个单词
 */

int main(void)
{
    int size,num;
    char volcabulary[20];
    printf("Please input a volcabulary:");
    scanf("%s",volcabulary);
    size = strlen(volcabulary);
    for(num = size - 1; num >= 0; num-- )
    {
        printf("%c",volcabulary[num]);
    }
    printf("\n");
    return 0;
}