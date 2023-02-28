#include <stdio.h>
#define SEC_PER_YEAR 3.156 * 1e7 

int main(void)
{
    float age_num, age_second;
    printf("Enter your age:");
    scanf("%f",&age_num);
    age_second = SEC_PER_YEAR * age_num;
    printf("The second is :%e\n",age_second);
    return 0;
}