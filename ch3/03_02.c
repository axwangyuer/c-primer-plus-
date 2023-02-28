#include <stdio.h>

int main(void)
{
    int ch_num;
    printf("Enter a value of char int ASCII:");//提示输入ASCII码，如：66
    scanf("%d", &ch_num);
    printf("The value is %d, and char is %c.\n",ch_num,ch_num);//打印输入的字符
    return 0;
}