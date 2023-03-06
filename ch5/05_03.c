#include <stdio.h>
#define DAY_PER_WEEK 7

int main(void)
{ 
    int days,weeks,last_days;
    printf("Please input days:");//提示用户输入天数
    scanf("%d",&days);
    while (days > 0)  //转换为周数和天数，通过while循环让用户输入
    {
        weeks = days / DAY_PER_WEEK;
        last_days = days % DAY_PER_WEEK;
        printf("%d days are %d week(s) , %d day(s).\n",days,weeks,last_days);
        printf("Please input another days:");
        scanf("%d",&days);
    }
    printf("Done!\n");
    return 0;
}