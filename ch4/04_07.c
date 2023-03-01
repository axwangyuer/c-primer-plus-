#include <stdio.h>
#include <float.h>

int main(void)
{
    double dou_num = 1.0 / 3.0;
    float flo_num = 1.0 / 3.0;
    printf("%.6f %.6f\n",dou_num,flo_num);
    printf("%.12f %.12f\n",dou_num,flo_num);
    printf("%.16f %.16f\n",dou_num,flo_num);
    printf("FLT_DIG:%d,DBL_DIG:%d\n",FLT_DIG,DBL_DIG);
    return 0;
}