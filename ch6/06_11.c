#include <stdio.h>
#define SIZE 7

/*
 * 编写一个程序，在数组中读入8个整数，然后按倒序打印这8个整数
 */

int main(void)
{
    int index,number[SIZE];
    printf("Please input 8 intager number:");
    for (index = 0; index <= SIZE; index++)  //读取8个数
    {
        scanf("%d",&number[index]);
    }
    for (index = index - 1; index >= 0; index--)  //倒序打印8个数
    {
        printf("%d ",number[index]);
    }
    printf("\n");
    return 0;
}