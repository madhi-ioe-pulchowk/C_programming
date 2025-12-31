// C program to greet the user

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // asks user for their name
    char name[35];
    printf("What is your name?\n");
    scanf("%s", name);

    // greets the user
    printf("hello, %s\n", name);
    system("pause");
    return 0;
}
