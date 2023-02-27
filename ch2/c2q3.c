#include <stdio.h>

int main(void)
{
    int num,total;
    printf("How old are you?\n");//询问年龄
    scanf("%d",&num);//讲年龄转化为天数
    total = num * 365;
    printf("The number is %d.\n",total);//输出结果
    return 0;
}