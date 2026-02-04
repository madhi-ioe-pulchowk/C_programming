#include <stdio.h>

int main()
{
    int size = 35;
    char str1[size], str2[size];
    char str[2 * size];
    int counter = 0;
    int i = 0;

    // reads two strings input from the user
    printf("Enter the first string: ");
    scanf("%s", &str1);

    printf("Enter the second string: ");
    scanf("%s", &str2);

    // concatenate two strings into one
    while(str1[i] != '\0')
    {
        str[counter] = str1[i];
        i++;
        counter++;
    }

    i = 0;
    while(str2[i] != '\0')
    {
        str[counter] = str2[i];
        i++;
        counter++;
    }

    // assigns the end of concatenated string
    str[counter] = '\0';

    printf("\n");
    printf("The concatenated string is: %s", str);
    printf("\n");
    return 0;
}
