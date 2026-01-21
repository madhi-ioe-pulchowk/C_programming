/*
Write a program to calculate and display the sum of digits entered by the user
successively until the sum reduces to a single digit number using while loop
and assign the single digit sum to variable R. And check weather R is prime or
composite or neither using the concept of goto statement.
After that do the following:
1. If variable R is neither prime nor composite, display the Rth term of Fibonacci series.
2. If variable R is composite, display the (R-1)th term of Fibonacci series.
3. If variable R is prime, display the (R+1)th term of Fibonacci series.
Note: "use the concept of while loop only, in the Fibonacci series problem."
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int digit_sum = 0;
    int temp = num;

    // calculates the sum of digits in number
    while(temp != 0)
    {
        digit_sum += temp % 10;
        temp /= 10;
    }

    // calculates the sum until it reduces to single digit number
    int temp_sum;
    while(digit_sum > 9)
    {
        temp_sum = digit_sum;
        digit_sum = 0;
        while(temp_sum != 0)
        {
            digit_sum += temp_sum % 10;
            temp_sum /= 10;
        }

    }

    // displays the reduced sum assigned to R
    int R = digit_sum;
    printf("\nThe reduced sum is: %d\n", R);

    // determines if the number R is prime or composite or neither
    int term;
    if(R == 0 || R == 1)
    {
        goto none;
    }

    else if(R == 2 || R == 3 || R == 5 || R == 7)
    {
        goto prime;
    }

    else
    {
        goto composite;
    }

    prime:
        printf("\n%d is a prime number", R);
        term = R + 1;
        goto end;

    composite:
        printf("\n%d is a composite number", R);
        term = R - 1;
        goto end;

    none:
        printf("\n%d is neither a prime nor a composite number", R);
        term = R;
        goto end;

    end:
        printf("\n");


    // calculates the corresponding Fibonacci term
    int fibonacci_term = 0;
    int term_zero = 0;
    int term_one = 1;
    int i = 2;
    if(term == 0)
    {
        printf("Index 0 does not exists\n");
        return 0;
    }
    else if(term == 1)
    {
        fibonacci_term = term_zero;
    }
    else
    {
        while(i < term)
        {
            fibonacci_term = term_zero + term_one;
            temp = term_one;
            term_one = fibonacci_term;
            term_zero = temp;
            i++;
        }
    }

    // display the result
    printf("%dth fibonacci term is: %d", term, fibonacci_term);
    return 0;

}
