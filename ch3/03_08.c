#include <stdio.h>
#define PINT_TO_CUP 2
#define CUP_OUNCE 8
#define OUNCE_SPOON 2
#define SPOOM_TEA 3

int main(void)
{
    float pint,cup,ounce,spoon ,tea_spoon;
    printf("Enter the number of cups:");//提示用户输入杯数
    scanf("%f",&cup);
    pint = cup / PINT_TO_CUP;
    ounce = cup * CUP_OUNCE;
    spoon = ounce * OUNCE_SPOON;
    tea_spoon = spoon * SPOOM_TEA;
    printf("%.1f cups = %.1fpint,%.1founce,%.1fsoup spoon,%.1ftea spoon\n",cup,pint,ounce,spoon,tea_spoon);  
    /* 以品脱、盎司、汤勺、茶勺为单位显示 */
    return 0;
}