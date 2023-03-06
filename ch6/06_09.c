# include <stdio.h>

float calculator (float get_num1,float get_num2);  //函数声明

/*
 * 要求用户输入两个浮点数，并打印两数之差除以两数乘积的结果。
 * 在用户输入非数字之前，程序应循环处理用户输入的每对值。
 * 使用一个函数返回计算结果
 */

int main(void)
{
    float f1_num,f2_num,result;
    printf("Please input two float number(q to quit):");
    while (scanf("%f %f",&f1_num,&f2_num) == 2)
    {
        result = calculator (f1_num,f2_num);  //函数调用
        printf("(%.3f - %.3f) / (%.3f * %.3f) = %.3f.\n",f1_num,f2_num,f1_num,f2_num,result);
        printf("Please input another two float number(q to quit):");
    }
    printf("Done!\n");
    return 0;
}

float calculator (float get_num1,float get_num2)   //函数定义
{
    float cal_result;
    cal_result = (get_num1 - get_num2) / (get_num1 * get_num2);
    return cal_result;
}