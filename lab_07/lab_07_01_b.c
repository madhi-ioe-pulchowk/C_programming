// with arguments but no return type
#include <stdio.h>

void sum_odd(int P, int Q, int num);

int main()
{
    int P, Q, num;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Enter a number to be divisible by: ");
    scanf("%d", &P);
    printf("Enter a number not to be divisible by: ");
    scanf("%d", &Q);

    sum_odd(P, Q, num);

    return 0;
}

void sum_odd(int P, int Q, int num)
{
    int i;
    int sum = 0;
    for(i = 1; i <= num; i++)
    {
        if(i % 2 != 0 && i % P == 0 && i % Q != 0)
        {
            sum += i;
        }
    }
    printf("The sum of odd number in range [1, %d] which are divisible by %d but not %d is: %d\n", num, P, Q, sum);
}
