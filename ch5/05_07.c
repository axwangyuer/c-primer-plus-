#include <stdio.h>
void cube(double num);

int main(void) //main函数要把用户输入的值传入给该值
{
    double input_num;
    printf("Please input a number:");//提示用户输入一个double类型的数
    scanf("%lf",&input_num);   //lf把对应的值存储为都变了类型
    cube(input_num);//打印该数的立方值
    return 0;
}

void cube(double num)
{
    double total;
    total = num * num * num;
    printf("%lf cube is %lf\n",num,total);
}