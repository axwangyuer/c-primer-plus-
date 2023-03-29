#include <stdio.h>

/*
 * 使用更智能的猜测策略
 * 程序最初猜50，询问用户是猜大了还是猜小了还是猜对了。
 * 如果猜小了，下一次猜测的值应该是50-100的中值，也就是75
 * 如果这次猜大了，那么下一次就是50-75的中值
 * 使用二分查找策略
 */

int main(void)
{
    int highest = 100;
    int lowest = 1;
    int guess = (highest + lowest) / 2;
    char response;
    printf("Pick an integer from 1 to 100. I will try to guess it.\n");
    printf("Respond with a h if my guess is high , with an l if it is low and with a r if i guess is right.\n");
    printf("Un...is your number is %d?\n",guess);
    while ((response = getchar()) != 'r')
    {
        if (response == 'l')
            lowest = guess + 1;
        else if (response == 'h')
            highest = guess - 1;
        else if (response == '\n')
            continue;
        else
        {
            printf("Please respond with a h if my guess is high , with an l if it is low and with a r if i guess is right.\n");
            continue;
        }
        guess = (highest + lowest) / 2;
        printf("Is your number is %d?\n",guess);
    }
    printf("I konw i could do it is %d\n",guess);
    return 0;
}