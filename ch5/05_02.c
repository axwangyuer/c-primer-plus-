#include <stdio.h>

int main(void)
{
    int num,count;
    printf("Please input a integrity number:");//提示用户输入一个整数
    scanf("%d",&num);
    count = 0;
    while(count++ < 11)   //打印该数到比该数大10的所有整数，打印各值之间隔用一个空格、制表符、或换行符分开
    {
        printf("%d ",num++);
    }
    printf("\n");
    return 0;
}