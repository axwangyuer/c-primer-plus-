#include <stdio.h>
#include <string.h>  //提供strlen（）函数原型

int main(void)
{
    char first_name[20],last_name[20];
    int fn_num,ln_num,total;
    printf("PLease input your first name:");//提示用户输入名
    scanf("%s",first_name);
    printf("Please input your last name:");//提示用户输入姓
    scanf("%s",last_name);
    printf("%s %s\n",first_name,last_name);//打印出名和姓
    fn_num = strlen(first_name);
    ln_num = strlen(last_name);
    printf("%*d %*d\n",fn_num,fn_num,ln_num,ln_num);//下一行显示名和姓的字母数，字母数要与相应的名和姓的结尾对齐
    printf("%s %s\n",first_name,last_name);//接下里打印相同的信息，但是字母数与相应的名和姓的开头对齐
    printf("%-*d %-*d\n",fn_num,fn_num,ln_num,ln_num);
    return 0;
}