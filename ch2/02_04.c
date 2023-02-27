#include <stdio.h>

void jolly(void);
void deny(void);

 int main(void)
 {
    jolly();//调用第一个自定义函数
    deny();//调用第二个自定义函数
    return 0;
 }

 void jolly(void)
 {
    printf("For he's a jolly good fellow!\n");
    printf("For he's a jolly good fellow!\n");
    printf("For he's a jolly good fellow!\n");
 }
 void deny(void)
 {
    printf("Which nobody can deny!\n");
 }