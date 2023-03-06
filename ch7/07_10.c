#include <stdio.h>
#define SINGLE 17850
#define OWNER 23900
#define MARRIED 29750
#define DIVORCE 14875
#define TAX1 0.15
#define TAX2 0.28

/*
 * 编写一个程序让指定缴纳税金的种类和应缴纳税收入
 * 然后计算税金
 * 程序应通过循环让用户可以多次输入
 */

int main(void)
{
    int choose,income,level;
    float tax,pur_inc;
    printf("Please choose your information(q to quit):\n");
    printf("1.single   2.owner\n");
    printf("3.married  4.divorce\n");
    while ((scanf("%d",&choose)) == 1)
    {
        switch (choose)
        {
            case 1 : level = SINGLE;
                     break;
            case 2 : level = OWNER;
                     break;
            case 3 : level = MARRIED;
                     break;
            case 4 : level = DIVORCE;
                     break;
        }
        printf("Please enter your salary:\n");
        scanf("%d",&income);
        if (income <= level)
        {
            tax = income * TAX1;
            printf("$%d is %.2f taxes.\n",income,tax);
        }
        else 
        {
            tax = level * TAX1 + (income - level) * TAX2;
            printf("$%d is %.2f taxes.\n",income,tax);
        }
        printf("Please choose your information(q to quit):\n");
    }
    
    return 0;
}