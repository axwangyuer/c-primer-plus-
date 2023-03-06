#include <stdio.h>

/*
 * 编写一个程序，在循环中使用switch语句实现用户输入不同的字母时，有不同的响应
 * 程序要记录累积的重量
 * 程序要计算货物总价，折扣，运费和包装费
 * 程序应显示所有购买信息：物品售价，订单重量，订购的蔬菜费用，订单的总费用，折扣，运费和包装费，以及所有的费用总额
 */

int main(void)
{
    char choose;
    float price, weight, total_wei, veg_price, total_price, discount, postage;
    total_wei = total_price = 0.0;
    printf("Input what do you want:\n");
    printf("a.Yangji     b.beet\n");
    printf("c.carrot     q.quit\n");
    while (scanf("%c",&choose) == 1)
    {
        if (choose == 'a' || choose == 'b' || choose == 'c')
        { 
            switch (choose)
            {
                case 'a' : printf("Yangji   $2.05/pound\nHow many pound do you want:");
                           scanf("%f",&weight);
                           price = weight * 2.05;
                           break;
                case 'b' : printf("beet   $1.15/pound\nHow many pound do you want:");
                           scanf("%f",&weight);
                           price = weight * 1.15;
                           break;
                case 'c' : printf("carrot   $1.09/pound\nHow many pound do you want:");
                           scanf("%f",&weight);
                           price = weight * 1.09;
                           break;
            }           
        }
        else if (choose == 'q')
            break;
        else 
            continue;
    

        total_wei += weight;
        veg_price += price;
        printf("Input what do you want:\n");
        printf("a.Yangji     b.beet\n");
        printf("c.carrot     q.quit\n");
    }
    discount = 0;
    if (veg_price >= 100)
    {
        discount = veg_price * 0.05;
        veg_price = veg_price - discount;
    }
    if (veg_price <= 5)
    {
        postage = 6.5;
        total_price = veg_price + postage;
    }
    else if (veg_price > 5 && veg_price <= 20)
    {
        postage = 15;
        total_price = veg_price + postage;
    }
    else
    {
        postage = 14 + (total_wei - 20) * 0.5;
        total_price = veg_price + postage;
    }
    printf("Total wieght: %.2f pound          vegetables total fee: $ %.2f\n",total_wei,veg_price);
    printf("postage fee: $ %.2f               discount: $ %.2f\n",veg_price,discount);
    printf("total price: $ %.2f\n",total_price);
    return 0;
}