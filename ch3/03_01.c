#include <stdio.h>

int main(void) //此程序只拿来测试溢出情况
{
    int big_int = 2147483647;
    float big_float = 3.4E38;
    float small_float = 2.0e20;
    printf("%d,%d\n",big_int,big_int + 1);                     //测试整数上溢情况
    printf("%e,%e\n",big_float,big_float * 100);                 //浮点数上溢情况
    printf("%e,%e\n",small_float,small_float + 1.0 - 2.0e20);        //浮点数下溢情况
    return 0;
}