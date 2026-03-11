// sum and average using array and pointer
#include <stdio.h>

int main()
{
    int M, N;
    printf("Enter the range: ");
    scanf("%d %d", &M, &N);

    int range = N - M + 1;
    int arr[range];
    int i;

    for(i = 0; i < range; i++)
    {
        arr[i] = M + i;
    }

    int* ptr;
    ptr = &arr[0];

    int sum = 0;

    for(i = 0; i < range; i++)
    {
        sum += *(ptr + i);
    }

    float avg = (float) sum / range;

    printf("The sum is: %d\n", sum);
    printf("The average is: %.2f\n", avg);

    return 0;
}
