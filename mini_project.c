#include <stdio.h>
int main()
{
    int order, qty, total, amount, sub_total = 0;
    char ch;
    printf("1.burger 2.pizza\n");
    do
    {
        printf("enter your order:");
        scanf("%d", &order);
        switch (order)
        {
        case 1:
            printf("burger RS-40\n");
            amount = 40;
            break;
        case 2:
            printf("pizza RS-100\n");
            amount = 100;
            break;
        default:
            printf("invalid order\n");
        }
        printf("enter your qty:");
        scanf("%d", &qty);
        total = amount * qty;
        printf("Your Bill is Rs %d\n", total);
        printf("do you wany to order again: ");
        getchar();
        scanf("%c", &ch);
    } while (ch == 'y' || ch == 'Y');

    return 0;
}