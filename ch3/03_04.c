#include <stdio.h>

int main(void)
{
    float num;
    printf("Enter a floating-point value:");
    scanf("%f",&num);//读取一个浮点数
    printf("fixed-point notation:%f\n",num);//打印成小数点形式
    printf("exponential notation:%e\n",num);//打印成指数形式
    printf("p notation:%a\n",num);//打印成p计数法
    return 0;
}