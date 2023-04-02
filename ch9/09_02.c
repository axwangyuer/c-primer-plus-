#include <stdio.h>

/*
 * 设计一个函数chline(ch ,i ,j),打印指定的字符j行i列
 */

void chline(char ch, int a, int b);

int main(void)
{
    char input;
    int row_num,col_num;
    printf("Please enter the charcter ,cloumn and row do you wnat print(q to quit):\n");
    while ((scanf("%c %d %d",&input,&col_num,&row_num)) == 3)
    {
        chline(input, col_num, row_num);
        printf("Please enter the charcter ,cloumn and row do you wnat print(q to quit):\n");
    }
    return 0;
}

void chline(char ch, int a, int b)
{
    for (int row = 0; row < b; row++)
    {
        for (int column = 0; column < a; column++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
}