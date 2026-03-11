#include <stdio.h>

typedef struct{
    int day;
    int month;
    int year;
}estDate;

typedef struct{
    char name[30];
    char location[30];
    estDate date;
}college;

int main()
{
    int size = 10;
    college c[size];
    int i;
    printf("Enter the details of colleges:");
    for(i = 0; i < size; i++)
    {
        printf("\n\nCollege %d:", i + 1);
        printf("\nName: ");
        scanf("%s", &c[i].name);
        printf("Location: ");
        scanf("%s", &c[i].location);
        printf("Established Date: \n");
        printf("Year: ");
        scanf("%d", &c[i].date.year);
        printf("Month: ");
        scanf("%d", &c[i].date.month);
        printf("Day: ");
        scanf("%d", &c[i].date.day);
    }

    printf("\n\nDetails of Colleges:");
    for(i = 0; i < size; i++)
    {
        printf("\n\nCollege %d:", i + 1);
        printf("\nName: %s", c[i].name);
        printf("\nLocation: %s", c[i].location);
        printf("\nEstablished Date: \n");
        printf("\nYear: %d", c[i].date.year);
        printf("\nMonth: %d", c[i].date.month);
        printf("\nDay: %d", c[i].date.day);
    }
    return 0;
}
