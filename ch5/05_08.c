#include <stdio.h>

int main(void)
{
    int fir_ope,sec_ope;
    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand:");//提示用户输入求模的第二个整数
    scanf("%d",&sec_ope);
    printf("Now enter the first operand:");//提示用户输入求模的第一个整数
    scanf("%d",&fir_ope);
    while(fir_ope > 0)
    {
        printf("%d %% %d is %d\n",fir_ope,sec_ope,fir_ope % sec_ope);
        printf("Enter next number for first operand:(<=0 to quit)");
        scanf("%d",&fir_ope);
    }
    printf("Done!\n");
    return 0;
}