#include <stdio.h>

int main(void)
{
    float doc_speed,doc_size;
    printf("Please input download speed(Mb/s) and file size(MB):");//提示用户输入以Mb/s为单位的下载速度和MB为单位的文件大小
    scanf("%f %f",&doc_speed,&doc_size);//计算文件下载时间
    printf("At %.2f megabits per second,a file of %.2f megabytes\n\
          download in %.2f second.\n",doc_speed,doc_size,doc_size * 8 / doc_speed);//打印三个变量的值(下载速度，文件大小，下载时间)
    return 0;
}