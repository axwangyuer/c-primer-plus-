#include <stdio.h>

/*
 * 两数的调和平均数这样计算，先得到两数的倒数，然后计算两个倒数的平均值，最后取计算结果的倒数
 * 编写一个函数，接受两个double类型的参数，返回这两个参数的调和平均数
 */

double ave_num(double num1, double num2);

int main(void)
{
    double input_one,input_two,result_num;
    printf("Please input two numbers:\n");
    while (scanf("%lf %lf",&input_one,&input_two) == 2)
    {
        result_num = ave_num(input_one, input_two);
        printf("%.2lf and %.2lf Harmonic mean is %.2lf\n",input_one,input_two,result_num);
        printf("Please enter another two numbers");
    }

    return 0;
}

double ave_num(double num1, double num2)
{
    double result;
    result = 1 / ((1 / num1 + 1 / num2) / 2);
    return result;
}