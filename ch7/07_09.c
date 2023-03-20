#include <stdio.h>
#include <stdbool.h>

/*
 * 编写一个程序，只接受正整数输入，然后显示所有小于或者等于该数的素数
 */

int main(void)
{
    int input,test,count;
    bool is_prime;
    printf("Please input one number:\n");
    while ((scanf("%d",&input)) == 1)
    {
        for (test = 2; test <= input; test++)
        {
            for (count = 2, is_prime = true; count < test; count++)
            {
                if (test % count == 0)
                {
                    is_prime = 0;
                }   
            }
            if (is_prime == 1)
                printf("%d  ",test);
        }
        printf("\nPlease input another number:\n");
    }
    return 0;
}