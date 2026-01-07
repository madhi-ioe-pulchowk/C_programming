#include <stdio.h>

int main()
{
    int unit, cust_num;
    float amount;

    // takes input for customer number
    printf("Enter your customer number: ");
    scanf("%d", &cust_num);

    // takes input for total consumption units
    printf("Enter your power consumption units: ");
    scanf("%d", &unit);

    // calculates the total amount to be paid based on unit
    if(unit <= 50)
    {
        amount = unit * .50;
    }
    else if(unit <= 100)
    {
        amount = 100 + (unit - 50) * .65;
    }
    else if(unit <= 200)
    {
        amount = 230 + (unit - 100) * .80;
    }
    else if(unit > 200)
    {
        amount = 390 + (unit - 200) * 1.00;
    }
    else
    {
        printf("Invalid Input\n");
        return 0;
    }
    printf("Customer %d has Rs. %.2f to be paid\n", cust_num, amount);
    return 0;
}
