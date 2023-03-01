#include <stdio.h>
#include <string.h>  //提供strlen（）函数的原型

int main(void)
{
    char name[20];
    int string_len;
    printf("Please input your name:");//提示用户输入名字
    scanf("%s",name);
    string_len = strlen(name);
    printf("\"%s\"\n",name);//打印名字，包括双引号
    printf("\"%20s\"\n",name);//在宽度为20的字段右端打印名字，包括双引号
    printf("\"%-20s\"\n",name);//在宽度为20的字段左端打印名字，包括双引号
    printf("%*s\n",string_len + 3,name);//在比姓名宽度宽3的字段中打印名字
    return 0;
}