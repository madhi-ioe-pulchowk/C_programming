/*
    Write a program to input and display the elements
    of a 1D array and count the frequency of each unique
    element and determine:
    * H as the highest frequency count of any element
    * L as the lowest frequency count of any element

    a) Compute D as D = H + L
    b) Find and display the Dth palindrome number in the
       range 10 to 1001
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // inputs for the size of the array
    int size, i, j;
    printf("Enter the size of 1D array: ");
    scanf("%d", &size);

    int arr[size];
    int unique[size];
    int frequency[size];
    int num_unique = 0;

    printf("\nEnter the elements:\n");

    // inputs each elements in the array
    for(i = 0; i < size; i++)
    {
        printf("->element[%d] = ", i + 1);
        scanf("%d", &arr[i]);
        for(j = 0; j < i; j++)
        {
            // checks if the input element is unique or not
            if(arr[i] == arr[j])
            {
                goto not_unique;
            }
        }

        // appends unique element into the unique array
        unique[num_unique] = arr[i];
        frequency[num_unique] = 0;
        num_unique++;
        not_unique:;
    }

    int H = 0;
    int L = size;
    for(i = 0; i < num_unique; i++)
    {
        for(j = 0; j < size; j++)
        {
            // calculates the frequency of each elements
            if(unique[i] == arr[j])
            {
                frequency[i]++;
            }
        }

        // finds the highest frequency
        if(frequency[i] > H)
        {
            H = frequency[i];
        }

        // finds the lowest frequency
        if(frequency[i] < L)
        {
            L = frequency[i];
        }
    }


    // displays each element with its frequency
    printf("\nThe unique elements with its frequency is: (element, frequency)\n");
    for(i = 0; i < num_unique; i++)
    {
        printf("%d: %d,  ", unique[i], frequency[i]);
    }
    printf("\n\n");

    // displays highest and lowest frequency
    printf("H: %d and L: %d", H, L);
    int D = L + H;

    // displays the sum of L and H
    printf("\nD: %d\n\n", D);

    int start = 10;
    int end = 1001;
    int term = 0;
    int dth_palindrome = 0;
    for(i = start; i <= end; i++)
    {
        int rev = 0;
        int temp = i;
        // calculates the reverse of a certain number i
        while(temp != 0)
        {
            int digit = temp % 10;
            rev = 10 * rev + digit;
            temp /= 10;
        }

        // checks if the number i is a palindrome or not
        if(rev == i)
        {
            term++;
            // checks if the number i is Dth palindome or not
            if(term == D)
            {
                dth_palindrome = i;
            }
        }
    }

    // displays the corresponding palindrome number
    if(dth_palindrome == 0)
    {
        printf("No palindrome found in the range.\n");
    }
    else
    {
        printf("%dth palindrome is: %d\n", D, dth_palindrome);
    }

    return 0;
}

