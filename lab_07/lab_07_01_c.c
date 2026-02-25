// with no arguments but return type
#include <stdio.h>

int sum_odd();

int main()
{
    int sum = sum_odd();

    printf("The sum of odd number in range is: %d\n", sum);
    return 0;
}

int sum_odd()
{
    int P, Q, num;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Enter a number to be divisible by: ");
    scanf("%d", &P);
    printf("Enter a number not to be divisible by: ");
    scanf("%d", &Q);

    int i;
    int sum = 0;
    for(i = 1; i <= num; i++)
    {
        if(i % 2 != 0 && i % P == 0 && i % Q != 0)
        {
            sum += i;
        }
    }
    return sum;
}
