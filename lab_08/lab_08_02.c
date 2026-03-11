// details of student using structure, udf and pointer
#include <stdio.h>

typedef struct{
    char name[28];
    int roll;
}student;

void display(student*, int);



int main()
{
    int size;
    printf("Enter the numbers of students: ");
    scanf("%d", &size);

    student s[size];
    int i;
    for(i = 0; i < size; i++)
    {
        printf("\nDetails of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", &s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
    }


    display(&s[0], size);
    return 0;
}


void display(student* ptr, int size)
{
    int i;
    printf("\nThe details of students are: \n");
    for(i = 0; i < size; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", (ptr + i)->name);
        printf("Roll: %d\n\n", (ptr + i)->roll);
    }
}
