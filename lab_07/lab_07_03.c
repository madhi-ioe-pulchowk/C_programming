#include <stdio.h>

int fibo(int num);

int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    int term = fibo(num);

    printf("%dth Fibonacci term is: %d\n", num, term);

    if(term % 2 == 0)
    {
        printf("%d is an even number\n", term);
    }
    else
    {
        printf("%d is an odd number\n", term);
    }

    return 0;
}

int fibo(int num)
{
    if(num == 1)
    {
        return 0;
    }
    else if(num == 2)
    {
        return 1;
    }
    else
    {
        return fibo(num - 1) + fibo(num - 2);
    }
}
