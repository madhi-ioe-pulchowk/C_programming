/*
    Write a C program that uses menu and udf for:
    1. Factorial of a number
    2. Fibonacci Series
*/

#include <stdio.h>

void factorial();
void fibo();

int main()
{
    int choice;
    printf("Enter your choice: \n");
    printf("1. Factorial\n");
    printf("2. Fibonacci\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            factorial();
            break;

        case 2:
            fibo();
            break;

        default:
            printf("Invalid Input\n");
            return 1;
    }

    return 0;
}


void factorial()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    int fact = 1;
    int i;
    for(i = 1; i <= num; i++)
    {
        fact *= i;
    }
    printf("%d! is: %d", num, fact);
}

void fibo()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    int fibo_zero = 0;
    int fibo_one = 1;
    int fibonacci;
    int i = 2;

    if(num == 1)
    {
        printf("%dth Fibonacci term is: %d", num, 0);
    }
    else if(num == 2)
    {
        printf("dth Fibonacci term is: %d", num, 1);
    }
    else
    {
        while(i < num)
        {
            fibonacci = fibo_one + fibo_zero;
            fibo_zero = fibo_one;
            fibo_one = fibonacci;
            i++;
        }
    }

    printf("%dth Fibonacci term is: %d", num, fibonacci);
}
