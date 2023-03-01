#include <stdio.h>
#define GAL_TO_LIT 3.758
#define MILE_TO_KM 1.609

int main(void)
{
    float mileage,gas_vol;
    printf("Please input mileage(mile) and gas assuption(gallon):");//提示用户输入里程和汽油量
    scanf("%f %f",&mileage,&gas_vol);
    printf("In US,your oil wear is %.1f M/G\n",mileage / gas_vol);
    printf("In Europe,your oil wear is %.1fL/100KM\n",(gas_vol * GAL_TO_LIT) / (mileage * MILE_TO_KM));//显示每加仑汽油行驶的英里数（显示小数点后一位数字）
    return 0;
}