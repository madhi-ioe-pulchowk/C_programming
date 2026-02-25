/*
    Write a C program to sort element in Ascending order
    and Descending order using call by reference udf
*/

#include <stdio.h>

void sort(int *ptr, int size);

int main()
{
    int size;
    int arr[30];
    printf("Enter the size of an array: ");
    scanf("%d", &size);

    int i;
    for(i = 0; i < size; i++)
    {
        printf("-> element[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    sort(&arr[0], size);

    printf("The element in Ascending order is: \n");
    for(i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }

    printf("\nThe element in Descending order is: \n");
    for(i = 0; i < size; i++)
    {
        printf("%d, ", arr[size - 1 - i]);
    }

    return 0;
}

void sort(int *ptr, int size)
{
    int i, j;
    for(i = 0; i < size; i++)
    {
        for(j = i + 1; j < size; j++)
        {
            if(*(ptr + i) > *(ptr + j))
            {
                int temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
}
