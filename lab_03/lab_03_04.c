// C program to display formatted output

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pi = 3.14;
    int x = 17;
    char ch =  'c';

    // use control strings to format and display results
    printf("%%f\n");
    printf("%9.0f\n", pi);
    printf("%3c\n", ch);
    printf("%.2f\n", pi);
    printf("%-9.2f", pi);
    printf("%d\n", x);

    system("pause");
    return 0;
}
