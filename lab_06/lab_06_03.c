#include <stdio.h>


int main()
{
    // reads the size of array
    int size, i, j;
    printf("Enter the size of the list: ");
    scanf("%d", &size);

    // reads the element of array
    // also find largest and smallest element
    int arr[size];
    int max, min, counter = 0;

    printf("Enter the elements of the array: \n");
    for(i = 0; i < size; i++)
    {
        printf("-> element[%d] = ", i + 1);
        scanf("%d", &arr[i]);

        if(counter == 0)
        {
            min = arr[i];
            max = arr[i];
        }

        if(arr[i] < min)
        {
            min = arr[i];
        }

        if(arr[i] > max)
        {
            max = arr[i];
        }
        counter ++;
    }


    printf("\n%d is the largest element", max);
    printf("\n%d is the smallest element", min);

    // ordering the list in ascending order
    for(i = 0; i < size; i++)
    {
        for(j = i; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nThe list in ascending order is: \n");
    for(i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }

    printf("\nThe list in descending order is: \n");
    for(i = 0; i < size; i++)
    {
        printf("%d  ", arr[size - 1 - i]);
    }

    printf("\n");

    return 0;

}
