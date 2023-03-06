#include <stdio.h>

/*
 * 创建一个包含26个元素的数组，并在其中存储26个小写字母,并打印数组的所有内容
 */

int main(void)
{
    char array[26];
    char ch ;
    int num;
    for (ch = 'a',num = 0; num < 26; ch++,num++)
    {
        array[num] = ch;
        printf("%c ",ch);
    }
    printf("\n");
    return 0;
}