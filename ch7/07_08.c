#include <stdio.h>
#include <stdio.h>
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25
#define BREAK1 300
#define BREAK2 450
#define LEVEL1 8.75
#define LEVEL2 9.33
#define LEVEL3 10.00
#define LEVEL4 11.20
#define BASIC1 (300 * RATE1)
#define BASIC2 (BASIC1 + (RATE2 * (BREAK2 - BREAK1)))

/*
 * 修改7的假设a，让程序可以给出一个供选择的工资等级菜单
 * 使用switch完成工资等级选择
 */

int main(void)
{
    int choose,hours,total;
    float tax,income;
    printf("Enter the number corresponding to the desired pay rate or action\n");
    printf("1) $8.75/hr         2) $9.33/hr\n");
    printf("3) $10.00/hr        4) $9.11.20/hr\n");
    printf("5) quit\n");
    scanf("%d",&choose);
    while (choose != 5)
    {       
        if (choose < 5 && choose > 0)
        {
            int inc_per_hour = 0;
            switch (choose)
            {
                case 1 : inc_per_hour = LEVEL1;
                         break;
                case 2 : inc_per_hour = LEVEL2;        //各工资的等级
                         break;
                case 3 : inc_per_hour = LEVEL3;
                         break;
                case 4 : inc_per_hour = LEVEL4;
                         break;
            }
            printf("Please enter the hours:\n");
            scanf("%d",&hours);
            if (hours < 40)                           // 时长小于40和大于40的情况
                total = inc_per_hour * hours;
            else
                total = inc_per_hour * (hours + 1.5 * (hours - 40));   
            if (total <= BREAK1)                    // 不同等级的税率
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
                printf("Your input hours is wrong.\n");               
        }
        else
        {
            printf("Enter the number corresponding to the desired pay rate or action\n");
            scanf("%d",&choose);
            continue;
        }
        printf("%d hours earn %d dollors and tax is %.2f and the rest of income is %.2f.\n",hours,total,tax,income);     
        printf("Enter the number corresponding to the desired pay rate or action\n");
        scanf("%d",&choose);
    }
    return 0;
}