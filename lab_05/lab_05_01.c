// C program to determine sum of odd numbers divisible by P but not Q
#include <stdio.h>

int main()
{
    int P, Q, start, end, i;
    printf("Enter the range for numbers [start, end]: ");
    scanf("%d, %d", &start, &end);
    if(start > end || start < 0)
    {
        printf("Invalid range");
        return 0;
    }
    printf("Enter the value for P(to be divisible by): ");
    scanf("%d", &P);
    printf("Enter the value for Q(not to be divisible by): ");
    scanf("%d", &Q);

    // calculate the sum using do loop
    int sum_do = 0;
    i = start;
    do
    {
        if(i%2 != 0 && i%P == 0 && i%Q != 0)
        {
            sum_do += i;
        }
        i++;
    }while(i <= end);

    // calculate the sum using while loop
    int sum_while = 0;
    i = start;
    while(i <= end)
    {
        if(i%2 != 0 && i%P == 0 && i%Q != 0)
        {
            sum_while += i;
        }
        i++;
    }

    // calculate the sum using for loop
    int sum_for = 0;
    i = start;
    for(i; i <= end; i++)
    {
        if(i%2 != 0 && i%P == 0 && i%Q != 0)
        {
            sum_for += i;
        }
    }


    // displaying the results
    printf("\nThe sum of odd numbers in [%d, %d] which are divisible by %d and not divisible %d is:\n", start, end, P, Q);
    printf("Using do loop: %d\n", sum_do);
    printf("Using while loop: %d\n", sum_while);
    printf("Using for loop: %d\n", sum_for);
    return 0;
}

