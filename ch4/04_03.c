#include <stdio.h>

int main(void)
{
    float num;
    printf("Please input a float number:");
    scanf("%f",&num);//读取一个浮点数
    printf("a.The input is %.1f or %.1e.\n",num,num);//以小数点计数法打印
    printf("b.The input is %+.3f or %.3e.\n",num,num);//以指数计数法打印
    return 0;
}