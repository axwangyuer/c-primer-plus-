#include <stdio.h>

int main(void)
{
    char name[20];
    float height;
    printf("Please input your height(cm) and name:");//提示用户输入身高和姓名
    scanf("%f %s",&height,name);
    printf("%s,you are %.3fm tall\n",name,height / 100);//以Dabney,you are ....
    return 0;
}