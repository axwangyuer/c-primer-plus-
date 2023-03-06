#include <stdio.h>
#include <stdbool.h>

/*
 * 编写程序读取输入，读到#停止
 * 报告ei出现次数
 */

int main(void)
{
    char input;
    int count = 0;
    bool mark = false;  
    printf("Please input some information(# to quit):\n");
    while ((input = getchar()) != '#')
    {
        if (input == 'e')
        {
            mark = true;
        }
        else if  (input == 'i' && mark == 1)
        {
            count++;
            mark = false;
        }
        else
            mark = false;
    }
    printf("%d times of \"ie\".\n",count);

    return 0;

}