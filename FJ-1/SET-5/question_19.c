#include <stdio.h>

int main()
{
    int no_of_items;
    float price, total_price = 0, discount = 0.1;

    printf("Enter number of items: ");
    scanf("%d", &no_of_items);

    for (int i = 0; i < no_of_items; i++)
    {
        printf("Enter price of item %d: ", i + 1);
        scanf("%f", &price);

        if (price > 100)
        {
            price -= price * discount;
        }

        total_price += price;
    }

    printf("Total price after discounts: %.2f\n", total_price);

    return 0;
}
