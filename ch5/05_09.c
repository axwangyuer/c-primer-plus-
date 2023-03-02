#include <stdio.h>
void Temperatures(double fahr_temp);  //摄氏温度的英文是 "Celsius temperature"

int main(void)
{
    double get_temp; 
    printf("Please input a ahrenheit temperaturn number:");//要求用户输入一个华氏温度
    while(scanf("%lf",&get_temp) == 1)
    {
        Temperatures(get_temp);
        printf("Please input aother ahrenheit temperaturn number(q to quit):");
        scanf("%lf",&get_temp);
    }
    printf("Done!\n");
    return 0;
}

void Temperatures(double fahr_temp)
{
    const double TRANS_NUM1 = 5.0 / 9.0;     
    const double TRANS_NUM2 = 32.0;
    const double TRANS_KEL = 273.16;     
    double cels_temp,kelvin_temp;  //华氏温度的英文是 "Fahrenheit temperature"，开氏温度的英文是 "Kelvin temperature"。
    cels_temp = TRANS_NUM1 * (fahr_temp - TRANS_NUM2);
    kelvin_temp = cels_temp + TRANS_KEL;
    printf("%.2lf Fahrenheit temperature is %.2lf Celsius temperature or %.2lf Kelvin temperature.\n",
            fahr_temp,cels_temp,kelvin_temp);
}