#include <stdio.h>

/*
 * 编写一个程序计算这两个无限序列的总和
 * 当用户输入0或者负值时结束输入
 */

int main(void)
{
    int length;
    double sum = 0.0;
    printf("Please enter the times:");
    scanf("%d",&length);
    while(length > 0)
    {
        sum = 0.0;
        for(int i = 1; i <= length; i++)  
        {
            sum = sum + 1.0 / i;
        }
        printf("The sum for 1.0+... is %f.\n",sum);
        sum = 0.0;
        for(int i = 1; i <= length; i++)
        {
            if(i % 2 == 0)
                sum = sum - 1.0 / i;
            else 
                sum = sum + 1.0 / i;
        }
        printf("The sum for 1.0-....is %f.\n",sum);
        sum = 0.0;
        for(int i = 1; i <= length; i++)
        {
            if(i % 2 != 0)
                sum = sum + 2 * 1.0 / i;
        }
        printf("The sum of %d is %f.\n",length,sum);
        printf("Please enter the times:");
        scanf("%d",&length);
    }
    return 0;
}