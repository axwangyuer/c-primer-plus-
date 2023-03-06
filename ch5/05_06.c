#include <stdio.h>

int main(void)
{
    int count,sum,days;
    printf("How many days do your want to earn money?\n");  //计算赚多少钱，第一天1块，第二天4块，第三天9块，以此类推。
    scanf("%d",&days);
    while (days > 0)
    {        
        count = 0;
        sum = 0;
        while (count++ < days)
            sum = sum + count * count;
        printf("sum = %d\n",sum);
        printf("How many days do your want to earn money?(<=0 to quit)\n");
        scanf("%d",&days);
    }
    printf("Done!\n");
    return 0;
}