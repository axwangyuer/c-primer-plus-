# include <stdio.h>

/*
 * 要求用户输入两个浮点数，并打印两数之差除以两数乘积的结果。
 * 在用户输入非数字之前，程序应循环处理用户输入的每对值。
 */

int main(void)
{
    float f1_num,f2_num;
    printf("Please input two float number(q to quit):");
    while (scanf("%f %f",&f1_num,&f2_num) == 2)
    {
        printf("(%.3f - %.3f) / %.3f * %.3f = %.3f.\n",f1_num,f2_num,f1_num,f2_num,(f1_num - f2_num) / (f1_num * f2_num));
        printf("Please input another two float number(q to quit):");
    }
    printf("Done\n");
    return 0;
}