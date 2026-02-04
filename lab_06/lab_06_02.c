#include <stdio.h>

int main()
{
    int min, i, j;
    int size = 4;
    int counter = 0;
    int matrix[size][size];
    printf("Enter the elements of a 4 * 4 matrix: \n");

    // read all the elements in the matrix
    // also find the smallest element
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            printf("-> element[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
            if(counter == 0)
            {
                min = matrix[i][j];
            }
            else if(matrix[i][j] < min)
            {
                min = matrix[i][j];
            }
            counter += 1;
        }
    }

    printf("\nThe original matrix is: \n");
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }

    // replacing the odd elements in primary and
    // all elements in secondary diagonal by min
    printf("\nThe modified matrix is: \n");
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            if((i == j) && (matrix[i][j] % 2 != 0))
            {
                matrix[i][j] = min;
            }

            if(i + j == size - 1)
            {
                matrix[i][j] = min;
            }
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
