#include <stdio.h>
#define BREAK1 300
#define BREAK2 450
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25
#define BASIC1 (300 * RATE1)
#define BASIC2 (BASIC1 + (RATE2 * (BREAK2 - BREAK1)))
#define INC_PER_HOUR 10


/*
 * 编写一个程序，提示用户输入一周的工作小时数
 * 然后打印工资总数，税金，和净收入
 * 基本工资=10.00美元/小时
 * 加班（超过40小时）= 1.5 倍的时间
 * 税率：前300美元为15%，须150美元为20%，余下的为25%
 */

int main(void)
{
    int hours,total;
    float tax,income;
    printf("How many hours do you work per week:\n");
    scanf("%d",&hours);
    if (hours < 40)
        total = INC_PER_HOUR * hours;
    else
        total = INC_PER_HOUR * (hours + 1.5 * (hours - 40));
    if (total <= BREAK1)
    {
        tax = RATE1 * total;
        income = total - tax;
    }
    else if (total > BREAK1 && total <= BREAK2)
    {
        tax = BASIC1 + RATE2 * (total - BREAK1);
        income = total - tax;
    }
    else if (total > BREAK2)    
    {
        tax = BASIC2 + RATE3 * (total - BREAK2);
        income = total - tax;
    }
    else
        printf("Your input number is wrong.\n");
    printf("%d hours earn %d dollors and tax is %.2f and the rest of income is %.2f.\n",hours,total,tax,income);
    return 0;
}