#include <stdio.h>
#define FEET_TO_CM 30.48  
#define INCH_TO_CM 2.54   

int main(void)
{
    float height,feet,inch;// feet英尺，inch英寸
    printf("Enter a height in centimeters:");//提示用户输入身高（单位cm）
    scanf("%f",&height);
    while(height > 0)//分别以厘米，英尺，英寸为单位显示该值，允许有小数部分 
    {
        feet = height / FEET_TO_CM;
        inch = height / INCH_TO_CM;
        printf("%.1f cm = %.1f feet , %.1f inches.\n",height,feet,inch);
        printf("Enter a height in centimeters(<= 0 to quit):");
        scanf("%f",&height);
    }
    printf("bye\n");
    return 0;
}