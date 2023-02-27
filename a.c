#include <stdio.h>

int main(void)
{
    int num;
    float total;
    printf("How many inches do you input?\n");//remainde users input inch
    scanf("%d",&num);
    total = num * 2.54;
    printf("%d inches equal %f centimeters.\n",num,total);//convert to centimeter
    return 0;
}