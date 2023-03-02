#include <stdio.h>

int main(void)
{
    const int S_PER_MIN = 60;
    int minutes,hours,aft_min;
    printf("Please input minutes(<=0 to quit):");//把分钟数转换为小时和分钟表示时间
    scanf("%d",&minutes);
    while (minutes > 0)
    {
        hours = minutes / S_PER_MIN;
        aft_min = minutes % S_PER_MIN;
        printf("%d minutes = %d hour(s) and %d minutes.\n",minutes,hours,aft_min);
        printf("Please input minutes:");
        scanf("%d",&minutes);
    }
    printf("Done!\n");
    return 0;
}