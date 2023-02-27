#include <stdio.h>

void br(void);
void ic(void);

int main(void)
{
    br();//调用第一个自定义函数
    printf(",");
    printf("India,China\n");
    ic();//调用第二个自定义函数
    printf("\n");
    printf("Brazil,Russia\n");
    return 0;
}

void br(void)
{
    printf("Brazil,Russia");
}

void ic(void)
{
    printf("India,China");
}