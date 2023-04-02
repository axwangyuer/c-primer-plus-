#include <stdio.h>

/*
 * 设计一个函数min（x，y），返回两个都变了类型值的较小值。
 */

double min(double a, double b);

int main(void)
{
    double num1, num2, min_num;
    printf("Please enter two numbers:\n");
    while ((scanf("%lf %lf",&num1,&num2)) == 2)    // 读取的两个数字中间不能用“，”
    {
        min_num = min(num1,num2);
        printf("the min is %.2lf.\n",min_num);   
        printf("Please enter another numbers(q to quit):\n");
    }
    return 0;
}

double min(double a, double b)
{
    double lowest;
    if (a > b)
       lowest = b;
    else
       lowest = a;
    return lowest;
}