#include <stdio.h>
#define INTEREST 0.08

/*
 * Chuckie赢得了100万美元，，他把奖金存入年利率为8%的银行账户
 * 在每年的最后一天取出10万美元
 * 多少年后会取完账户的钱
 */

int main(void)
{
    int years;
    double account = 1000000;
    for(years = 1; account > 0; years++)
    {
        account = account * 0.08 + account; //计算每年的本金和利息总数
        account = account - 100000;
    }
    printf("%d years after the account blance is 0.\n",years);
    return 0;
}