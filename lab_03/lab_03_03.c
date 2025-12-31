// C program to calculate KE and PE of an object

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m;
    int v, h;
    const float g = 9.8;
    // take users input for mass, velocity and height
    printf("Enter the mass of the body (in kg): ");
    scanf("%f", &m);
    printf("Enter the velocity of the body (in m/s): ");
    scanf("%d", &v);
    printf("Enter the height of the body (in m): ");
    scanf("%d", &h);

    // computes KE and PE
    float KE = 0.5 * m * v * v;
    float PE = m * g * h;

    // displays KE and PE
    printf("The kinetic energy(KE) of the body is: %.2f\n", KE);
    printf("The potential energy(PE) of the body is: %.2f\n", PE);
    system("pause");
    return 0;
}
