#include <stdio.h>
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
 * 修改第七章的编程练习8，用字符代替数字标记菜单的选项，用q代替5作为结束的输入标记
 */


int main(void)
{
    int hours,total;
    float tax,income;
    char choose;
    printf("Enter the number corresponding to the desired pay rate or action\n");
    printf("a) $8.75/hr         b) $9.33/hr\n");
    printf("c) $10.00/hr        d) $9.11.20/hr\n");
    printf("q) quit\n");
    while ((choose = getchar()) != 'q')
    {       
        if (choose < 101 && choose > 96 )
        {
            int inc_per_hour = 0;
            switch (choose)
            {
                case 'a': inc_per_hour = LEVEL1;
                          break;
                case 'b': inc_per_hour = LEVEL2;        //各工资的等级
                          break;
                case 'c': inc_per_hour = LEVEL3;
                          break;
                case 'd': inc_per_hour = LEVEL4;
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
        else if (choose == '\n' || choose == ' ')       //处理回车
            continue;
        else
        {
            printf("Enter the correct number corresponding to the desired pay rate or action\n");
            continue;
        }
        printf("%d hours earn %d dollors and tax is %.2f and the rest of income is %.2f.\n",hours,total,tax,income);     
        printf("Enter the number corresponding to the desired pay rate or action\n");
    }
    return 0;
}