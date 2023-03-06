#include <stdio.h>

/*
 * Rabnud博士加入了一个社交圈，起初他有五个朋友
 * 第一周少了一个朋友，剩下的朋友翻倍
 * 第二周少了两个朋友，剩下的朋友翻倍
 * 第n周少了n个朋友，剩下的数量翻倍
 * 编写一个程序，计算并显示博士每周的朋友数量
 * 该程序一直运行，直到超过邓巴数（150）
 */

int main(void)
{
    int weeks,friends_num ;
    for (weeks = 1,friends_num = 5; friends_num < 150; weeks++)
    {
        printf("%d week(s) has %d friends.\n",weeks,friends_num);
        friends_num = (friends_num - weeks) * 2;
    }
    return 0;
}
