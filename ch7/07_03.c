#include <stdio.h>

/*
 * 读取整数直到用户输入0
 * 输入结束后，程序应报告用户输入的偶数（不包括0）个数，这些偶数的平均值，如数的奇数个数以及奇数的平均值
 */

int main(void)
{
    int get_num, even,odd;
    float even_ave, odd_ave,count_even,count_odd;
    even = odd = 0;
    count_even = count_odd = 0.0;
    printf("please input some integrate number(0 to quit):\n");
    while ( scanf("%d",&get_num) == 1 && get_num != 0)
    {
        if (get_num % 2  == 0)
        {
            count_even++;
            even += get_num;
        }
        else 
        {
            count_odd++;
            odd += get_num;
        }
    }
    even_ave = even / count_even;
    odd_ave = odd / count_odd;
    printf("%.0f even number, total = %d,average number is %.2f.\n",count_even,even,even_ave);
    printf("%.0f odd number, total = %d,average number is %.2f.\n",count_odd,odd,odd_ave);
    return 0;
}