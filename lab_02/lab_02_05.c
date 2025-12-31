// C program to find the area of a circle

#include <stdio.h>
#include <stdlib.h>

const float pi = 3.14;
int main()
{
    // asks user for the radius of the circle
    int r;
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

    // calculates and displays the area of the circle
    float area = pi * r * r;
    printf("The area of circle with radius %d is %.2f\n", r, area);
    system("pause");
    return 0;
}
