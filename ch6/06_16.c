#include <stdio.h>
#define DAP_TAX 0.1
#define DEI_TAX  0.05

/*
 * Daphne以10%的单利息投资了100美元（每年投资获利相当于原始投资的10%）
 * Deirdre以5%的复合利息投资了100美元（利息是当前余额的5%）
 * 编写一个程序，计算需要多少年Deirdre的投资额才会超过Daphne
 * 并显示两人的投资额
 */

int main(void)
{
    int years;
    double dap_money = 100,dei_money = 100;
    for (years = 1; dap_money >= dei_money; years++)
    {
        dap_money = 100;
        dap_money = dap_money + dap_money * DAP_TAX * years;
        dei_money = dei_money+ dei_money * DEI_TAX;
        //printf("%lf %lf\n", dap_money,dei_money);      //测试
    }
    printf("%d years after!\n",years);
    return 0;
}