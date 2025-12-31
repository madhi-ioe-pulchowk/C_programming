//C program to find sum of any two numbers

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // asks user for two integer input
    int num1, num2;
    printf("Enter any two numbers: ");
    scanf("%d %d", &num1, &num2);

    //sums up the input integer and display the sum
    int sum = num1 + num2;
    printf("%d + %d = %i\n", num1, num2, sum);
    system("pause");
    return 0;
}
