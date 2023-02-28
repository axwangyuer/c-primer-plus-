#include <stdio.h>
#define INCHG_TO_CM 2.54

int main(void)
{
    float height_num;
    printf("Please enter your height(inch):");//提示用户输入身高（英寸）
    scanf("%f",&height_num);
    printf("Your height height is:%.2fcm\n",height_num * INCHG_TO_CM);//显示以cm为单位的身高
    return 0;
}