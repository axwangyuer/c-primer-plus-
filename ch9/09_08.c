#include <stdio.h>

/* 
 * 修改6.20中的power（）函数返回一个double类型的正整数次幂。改进该函数，使其能够正确计算负幂
 * 另外，函数还需要处理0的任何次幂为0.任何数的0次幂都为1
 * 要是用一个循环，在程序中测试该函数
 */

double power(double n, int p);

int main(void)
{
    double num,result;
    int mi;
    printf("please input number and the positive integer power(q to quit):\n");
    while (scanf("%lf %d",&num, &mi) == 2)
    {
        result = power(num, mi);
        printf("%.2lf to the power %d is %.5lf.\n",num, mi, result);
        printf("please input number and the positive integer power(q to quit):\n");
    }
    return 0;
}


double power(double n, int p)
{
    double pow = 1;
    int i;

    if (p > 0)
    {
        if (n == 0)
        {
            return 0;
        }
        else
        {
            for (i = 1; i <= p; i++)
                pow *= n;
            return pow;
        }
    }
    else if (p == 0)
       return pow;
    else
    {
        for (i = -1; i >= p; i--)
                pow *= n;
        pow = 1 / pow;
        return pow;
    }
       


}