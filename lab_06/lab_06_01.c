#include <math.h>
#include <stdio.h>

int main()
{
    // users' input for the size of matrix
    int size, i, j;
    printf("Enter the size of a square matrix: ");
    scanf("%d", &size);
    int matrix[size][size];

    // read the matrix and find the
    // sum of principal and secondary diagonals

    int sum = 0;
    printf("Enter the elements of matrix: \n");
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            printf("-> element[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
            if((i == j) || (i + j == size - 1))
            {
                sum += matrix[i][j];
            }
        }
    }

    // displays the input matrix in proper order
    printf("\nThe given square matrix of order %d is: \n", size);
    for(i = 0; i < size; i++)
    {
        for(
            j = 0; j < size; j++)
        {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }

    // displays the sum of principal and secondary diagonal elements
    printf("\nThe sum of elements of principal and secondary diagonal is: %d\n", sum);

    // checks if sum is Armstrong or not
    if(sum == 0)
    {
        printf("%d is an Armstrong number\n", 0);
        return 0;
    }

    if(sum < 0)
    {
        printf("The sum is negative\n");
        return 0;
    }

    int num_of_digits = log10(sum) + 1;
    int temp = sum;
    int digit;
    int armstrong_sum = 0;
    while(temp != 0)
    {
        digit = temp % 10;
        armstrong_sum += (int)(pow(digit, num_of_digits) + .5);
        temp /= 10;
    }

    if(armstrong_sum == sum)
    {
        printf("%d is an Armstrong number\n", sum);
    }
    else
    {
        printf("%d is not an Armstrong number\n", sum);
    }

    return 0;

}
