#include <stdio.h>
void get_choise(void);
float get_num(void);
void add_cal(void);
void sub_cal(void);
void mul_cal(void);
void div_cal(void);



/*
 * 编写一个程序，显示一个提供加法、减法乘法、除法的菜单
 * 该程序只接受菜单提供的选项
 * 程序使用float类型的变量存储用户输入的数字，如果用户输入失败，则允许再次输入。
 * 进行除法运算时，如果用户输入0作为第二个数，程序应提醒用户重新输入一个新值
 */

int main(void)
{
    char input;
    get_choise();
    while ((input = getchar()) != 'q')
    {
        if (input == 'a')
        {
            add_cal();
            get_choise();
            continue;
        }
        else if (input == 's')
        {
            sub_cal();
            get_choise();
            continue;
        }
        else if (input == 'm')
        {
            mul_cal();
            get_choise();
            continue;
        }
        else if (input == 'd')
        {
            div_cal();
            get_choise();
            continue;
        }
        else if (input == '\n' || input == ' ')
            continue;
        else
        {
            printf("Input wrong!\n");
            get_choise();
            continue;
        }
    }
    printf("Bye.\n");
    return 0;
}

void get_choise(void)
{
    printf("Enter the operation of your choice:\n");
    printf("a. add          s. subtract\n");
    printf("m. multiply     d. divide\n");
    printf("q. quit\n");
}

float get_num(void)
{
    float num;
    char c;
    while ((scanf("%f",&num)) != 1)
    {
        while ((c = getchar()) != '\n')
        {
            putchar(c);
        }
        printf(" is not a number,such as 2.5, -1.78e8,or 3:");
    }
    return num;
}

void add_cal(void)
{
    float a, b, total;
    printf("Enter first number:");
    a = get_num();
    printf("Enter second number:");
    b = get_num();
    total = a + b;
    printf("%.2f + %.2f = %.2f\n",a,b,total);
}

void sub_cal(void)
{
    float a, b, total;
    printf("Enter first number:");
    a = get_num();
    printf("Enter second number:");
    b = get_num();
    total = a - b;
    printf("%.2f - %.2f = %.2f\n",a,b,total);
}

void mul_cal(void)
{
    float a, b, total;
    printf("Enter first number:");
    a = get_num();
    printf("Enter second number:");
    b = get_num();
    total = a * b;
    printf("%.2f * %.2f = %.2f\n",a,b,total);
}


void div_cal(void)
{
    float a, b, total;
    printf("Enter first number:");
    a = get_num();
    printf("Enter second number:");
    while ((b = get_num()) == 0)
    {
        printf("Enter a number other than 0:");
    }
    total = a / b;
    printf("%.2f / %.2f = %.2f\n",a,b,total);
}


