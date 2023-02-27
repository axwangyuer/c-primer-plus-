#include <stdio.h>

int main(void)
{
    float num;
    float total;
    printf("How many inches do you input?\n");//remainde users input inch
    scanf("%f",&num);
    total = num * 2.54;
    printf("%f inches equal %f centimeters.\n",num,total);//convert to centimeter
    return 0;
}