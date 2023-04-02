#include <stdio.h>

/*
 * 编写并测试一个函数，改函数以3个double变量的地址作为参数
 * 把最小值放入第一个变量，中间值放入第二个变量，最大值放入第三个变量
 */

void order_number(double * a, double * b, double * c);

int main(void)
{
    double num_1, num_2, num_3;
    printf("Please enter three diffrent numbers:\n");
    scanf("%lf %lf %lf",&num_1, &num_2, &num_3);
    order_number(&num_1, &num_2, &num_3);
    printf("the order is : %.2lf   %.2lf   %.2lf\n",num_1, num_2, num_3);
    return 0;
}

void order_number(double * a, double * b, double * c)
{
    double min,sec,big;
    if (*a > *b && *a > *c)
    {
        big = *a;
        if (*b > *c)
        {
            min = *c;
            sec = *b;
        }
        else 
        {
            min = *b;
            sec = *c;
        }
    }
    else if (*b > *a && *b > *c)
    {
        big = *b;
        if (*a > *c)
        {
            min = *c;
            sec = *a;
        }
        else 
        {
            min = *a;
            sec = *c;
        }
    }
    else if (*c > *a && *c > *b)
    {
        big = *c;
        if (*a > *b)
        {
            min = *b;
            sec = *a;
        }
        else 
        {
            min = *a;
            sec = *b;
        }
    }
    else
        printf("Input error.\n");
    *a = min;
    *b = sec;
    *c = big;
}