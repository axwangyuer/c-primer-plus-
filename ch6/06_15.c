#include <stdio.h>
#define SIZE 255

/*
 * 读取一行输入，然后把输入的内容倒序打印出来
 * 可以把它存在char类型的数组中，假设每行字符不超过255
 */

int main(void)
{
    char array[SIZE],letter;
    int count = 0;
    printf("please input some message:");
    scanf("%c",&letter);
    while (letter != '\n')   //循环读入
    {
        array[count] = letter;
        scanf("%c",&letter);
        count++;
    }
    for (;count >= 0; count--)  //循环输出
    {
        printf("%c",array[count]);
    }
    printf("\n");
    return 0;
}