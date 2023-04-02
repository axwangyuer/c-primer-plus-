#include <stdio.h>

/* 
 * 使用递归，重写练习8
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
            pow = n * power(n, p - 1);
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