#include <stdio.h>
#define MASS_PER_MOLE 3.0 * 1E-23
#define MASS_PER_QURAT 950

int main (void)
{
    float water_num,total;
    printf("Please enter the number of quart:");//提示用户输入水的夸脱
    scanf("%f",&water_num);
    total = water_num * MASS_PER_QURAT * MASS_PER_MOLE;
    printf("The water molecule is:%e\n",total);//输出水分子数量
    return 0;
}