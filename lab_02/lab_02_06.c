// C program to demonstrate type_casting

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1 = 18.0045;
    int num2 = 5;

    // implicit type_casting
    float ans = num1 / num2;

    // explicit type_casting
    int int_ans = (int)ans;
    printf("The answer in float is %.2f\n", ans);
    printf("The answer in int is %i\n", int_ans);
    system("pause");
    return 0;
}
