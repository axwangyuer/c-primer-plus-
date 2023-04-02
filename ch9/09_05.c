#include <stdio.h>

/*
 *  编写并测试一个函数larger_of（），该函数把两个都double类型变量的值换为较大的值
 */

void large_of(double * num1, double * num2);

int main(void)
{
    double inp_one, inp_two;
    printf("Please enter two numbers:\n");
    scanf("%lf %lf", &inp_one, &inp_two);
    printf("%.2lf and %.2lf ",inp_one,inp_two);
    large_of(&inp_one, &inp_two);
    printf("after change is %.2lf and %.2lf\n",inp_one,inp_two);
    return 0;
}

void large_of(double * num1, double * num2)
{
    double biggest;
    if (*num1 > *num2)
        biggest = *num1;
    else
        biggest = *num2;
    *num1 = biggest;
    *num2 = biggest;

}