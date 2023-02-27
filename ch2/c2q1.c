#include <stdio.h>

int main(void)
{
    printf("Xingxin Wang\n");//第一行打印名字，调用一次printf
    printf("Xingxin\nWang\n");//第二行，第三行打印名和姓，调用一次printf
    printf("Xingxin");
    printf("Wang\n");//第四行打印名和姓，调用两次printf
    return 0;
}