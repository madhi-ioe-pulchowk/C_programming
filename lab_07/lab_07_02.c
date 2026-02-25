#include <stdio.h>

int power(int a, int b);

int main()
{
    int a, b;
    printf("Enter any number[a]: ");
    scanf("%d", &a);
    printf("Enter the power to be raised to[b]: ");
    scanf("%d", &b);

    int pow = power(a, b);
    printf("%d^%d is: %d\n", a, b, pow);
    return 0;
}

int power(int a, int b)
{
    if(b == 0)
    {
        return 1;
    }
    else
    {
        return a * power(a, b - 1);
    }
}
