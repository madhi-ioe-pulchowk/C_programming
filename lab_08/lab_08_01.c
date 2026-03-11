// sum and average of numbers between M and N using pointer
#include <stdio.h>

int main()
{
    int M, N;
    printf("Enter the range: ");
    scanf("%d %d", &M, &N);


    int sum = 0;

    // initializing pointer as the address of M
    int* ptr;
    ptr = &M;
    int i = 0;

    // calculating the sum of integers
    while(i < N - M + 1)
    {
        sum += *ptr + i;
        i++;
    }

    // calculating the average of numbers
    float avg = (float)sum / (N - M + 1);

    printf("The sum is: %d\n", sum);
    printf("The average is: %.2f\n", avg);

    return 0;
}
