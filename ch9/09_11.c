#include <stdio.h>

/*
 * 编写并测试Fibonacci()函数，该函数用循环代替递归计算斐波那契数
 */

void Fibonacci(int a);

int main(void)
{
    int number;
    printf("please enter a integer:\n");
    scanf("%d",&number);
    Fibonacci(number);
    return 0;
}

void Fibonacci(int a)
{
    int num, sum, first, last;
    if (a < 3)
    {
        for (num = 1; num < a; num ++)
            printf("1  ");;
    }
    else
    {
        printf("1  1  ");
        first = 1;
        last = 1;
        for (num = 2; num < a; num ++)
        {
            sum = first + last;
            first = last;
            last = sum;
            printf("%d  ",sum);
        }
        
    }
}
