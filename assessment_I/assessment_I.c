/*
    Write a C program that checks weather a given number is palindrome or not
    * if a number is palindrome, store the number of digits of number in variable Q
    * if a number is not palindrome, store the sum of digits in Q

    Then, check weather the value stored in Q is prime, composite, or neither
    and perform the following task:
    * if Q is prime, print (Q+1)th Fibonacci term
    * if Q is composite, print (Q-1)th Fibonacci term
    * if Q is neither prime nor composite, print Qth Fibonacci term

    NOTE:
    * use do while loop to check palindrome
    * use goto statement to check prime or composite
    * use while loop in Fibonacci series
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // takes users' input for a number
    int num;
    int Q;
    printf("Enter a number: ");
    scanf("%d", &num);

    // checks if a given number is positive integer or not
    if(num < 0)
    {
        printf("\nInvalid Input 'PLEASE ENTER A POSITIVE INTEGER'\n");
        return 1;
    }

    // checks for base case if number equals to zero
    printf("\n");
    if(num == 0)
    {
        printf("%d is a palindrome number\n", num);
        Q = 1;
        printf("The number of digits in %d is: %d\n", num, Q);
        goto neither;
    }

    // find the reverse of the given number
    int original_num = num;
    int temp = num;
    int reverse_num = 0;
    int sum_of_digits = 0;
    int digit;
    int number_of_digits = 0;
    do
    {
        digit = temp % 10;
        reverse_num = 10 * reverse_num + digit;
        sum_of_digits += digit;
        temp /= 10;
        number_of_digits++;
    }while(temp != 0);

    // checks if the given number is palindrome or not
    // assigns the value of Q as required
    if(reverse_num == original_num)
    {
        printf("%d is a palindrome number\n", original_num);
        Q = number_of_digits;
        printf("The number of digits in %d is: %d\n", original_num, Q);
    }
    else
    {
        printf("%d is not a palindrome number\n", original_num);
        Q = sum_of_digits;
        printf("The sum of digits of %d is: %d\n", original_num, Q);
    }

    // checks if Q is prime, composite or neither
    int term;
    if(Q == 1)
    {
        goto neither;
    }
    else
    {
        int i = 2;
        while(i <= (int)sqrt(Q))
        {
            if(Q % i == 0)
            {
                goto composite;
            }
            i++;
        }
        goto prime;
    }

    prime:
        printf("%d is a prime number\n", Q);
        term = Q + 1;
        goto end;

    composite:
        printf("%d is a composite number\n", Q);
        term = Q - 1;
        goto end;

    neither:
        printf("%d is neither prime nor a composite number\n", Q);
        printf("%dth Fibonacci term is: %d\n", Q, 0);
        return 0;

    end:
        ;

    // prints the fibonacci term
    int term_zero = 0;
    int term_one = 1;
    int fibonacci_term = term_one;
    int i = 1;
    while(i < term - 1)
    {
        fibonacci_term = term_zero + term_one;
        term_zero = term_one;
        term_one = fibonacci_term;
        i++;
    }

    printf("%dth Fibonacci term is: %d\n", term, fibonacci_term);
    return 0;
}

