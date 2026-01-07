#include <stdio.h>

int main()
{
    float sp, tax, amount;
    char type;

    // take input about the type of the item
    printf("What is your item type?\n");
    printf("1. National [N] \n2. Foreign [F]\n-> ");
    scanf(" %c", &type);

    // take input for the sales price of the item
    printf("Enter the sales price of your item: Rs. ");
    scanf("%f", &sp);

    // checks for item type and allocate tax accordingly
    if(type == 'N' || type == 'n')
    {
        tax = 0.06 * sp;
    }
    else if(type == 'F' || type == 'f')
    {
        tax = 0.13 * sp;
    }
    else
    {
        printf("Invalid Input\n");
        return 0;
    }

    // calculates the net payable amount
    amount = sp + tax;
    printf("The net sale price of the item is: Rs. %.2f\n", amount);
    return 0;
}
