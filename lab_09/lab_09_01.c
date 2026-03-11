#include <stdio.h>

typedef struct{
    char name[30];
    char program[30];
    int roll;
    float marks[5];
}student;

int main()
{
    student s[30];
    char end = 'a';
    printf("Press [E/e] if you want to end\n\n");
    printf("Enter the details of the students:");

    int i = 0;
    do
    {
        printf("\n\nStudent %d:", i + 1);
        printf("\nName: ");
        scanf("%s", &s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Program: ");
        scanf("%s", &s[i].program);

        int j;
        for(j = 0; j < 5; j++)
        {
            printf("Marks of subject %d: ", j + 1);
            scanf("%f", &s[i].marks[j]);
        }
        printf("Want to continue? ");
        scanf(" %c", &end);
        i++;
    }while(end != 'e' && end != 'E');

    int size = i;
    printf("\nDetails of Students:");
    for(i = 0; i < size; i++)
    {
        printf("\n\nStudent %d:", i + 1);
        printf("\nName: %s", s[i].name);
        printf("\nRoll: %d", s[i].roll);
        printf("\nProgram: %s", s[i].program);

        int j;
        for(j = 0; j < 5; j++)
        {
            printf("\nMarks of subject %d: %.2f", j + 1, s[i].marks[j]);
        }
    }
    return 0;
}
