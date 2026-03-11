#include <stdio.h>

typedef struct{
    int feet;
    int inch;
}height;

int main()
{
    height h[2];
    printf("Enter the height details of students:");
    int i;
    for(i = 0; i < 2; i++)
    {
        printf("\n\nHeight of student %d:", i + 1);
        printf("\nFeet: ");
        scanf("%d", &h[i].feet);
        printf("Inch: ");
        scanf("%d", &h[i].inch);
    }


    // difference
    int height1 = h[0].feet * 12 + h[0].inch;
    int height2 = h[1].feet * 12 + h[1].inch;
    int height;

    if(height1 > height2)
        height = height1 - height2;

    else
        height = height2 - height1;

    int h_feet = height / 12;
    int h_inch = height % 12;

    printf("\nThe height difference is: %dft %din\n", h_feet, h_inch);
    return 0;
}
