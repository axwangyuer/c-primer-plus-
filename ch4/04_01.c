#include <stdio.h>

int main(void)
{
    char first_name[20],last_name[20];
    printf("Please input your first name and your last name:");//提示用户输入名和姓
    scanf("%s %s",first_name,last_name);
    printf("So,your name is %s %s.\n",first_name,last_name);//以“名，姓”打印出来
    return 0;
}