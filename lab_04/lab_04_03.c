#include <stdio.h>

int main()
{
    float sp, amount, net_amount;
    char type;

    // takes input for item type
    printf("Enter your type of product purchased:\n");
    printf("1. Grocery [G] \n2. Cosmetics [K] \n3. Clothing [C] \n4. Liquor [L]\n-> ");
    scanf(" %c", &type);

    // takes for the original sales price for the product
    printf("Enter the sales price of the product: Rs. ");
    scanf("%f", &sp);

    // calculate the total based on item-specific tax
    if(type == 'G' || type == 'g')
    {
        amount = sp + sp * .10;
    }
    else if(type == 'K' || type == 'k')
    {
        amount = sp + sp * .15;
    }
    else if(type == 'C' || type == 'c')
    {
        amount = sp + sp * .20;
    }
    else if(type == 'L' || type == 'l')
    {
        amount = sp + sp * .24;
    }
    else
    {
        printf("Invalid Input\n");
        return 0;
    }

    // calculates the net amount with discount if necessary
    if(amount > 6000.00)
    {
        net_amount = amount - .02 * amount;
    }
    else
    {
        net_amount = amount;
    }

    printf("The net sales price for the product is: Rs. %.2f", net_amount);
    return 0;
}
