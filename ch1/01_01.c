#include <stdio.h>

int main(void)
{
    float num,total;
    printf("How many inches do you input?\n");//remainde users input inch
    scanf("%f",&num);
    total = num * 2.54;
    printf("%.2f inches equal %.2f centimeters.\n",num,total);//convert to centimeter
    return 0;
}