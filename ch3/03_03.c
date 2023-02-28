#include <stdio.h>

void print_text(void);

int main(void)
{
    printf("\a");
    print_text();//发出一声警报然后打印文本
    return 0;
}

void print_text(void)
{
    printf("Startled by the sudden sound, Sally shouted,\n");
    printf("\"By the Great Pumpkin, what was taht!\"\n");
}