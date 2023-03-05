#include <stdio.h>

/*
 * 提示用户输入大写字母，使用嵌套循环以金字塔形的格式打印字母
 * A = 65，Z = 90
 */

int main(void)
{
    int column,row,input_num,blank;
    char input,let_raise,let_down;
    printf("Please input a capital:");
    scanf("%c",&input);
    input_num  = input - 64;
    for(column = 1; column <= input_num; column++)
    {
        for(blank = 0; blank < input_num - column; blank++)  //控制空格
        {
            printf(" ");
        }
        for(let_raise = 'A'; let_raise <= column + 64; let_raise++)  //控制升序
        {
            printf("%c",let_raise);
        }
        for(let_down = let_raise - 2; let_down >='A'; let_down--)   //控制降序
        {
            printf("%c",let_down);
        }
        printf("\n");
    }
    return 0;
}