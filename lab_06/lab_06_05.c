#include <stdio.h>

int main()
{
    int size = 35;
    char str[size];
    int len = 0;

    // reads the users input string
    printf("Enter a string: ");
    scanf("%s", &str);

    // finds the length of the input string
    int i = 0;
    while(str[i] != '\0')
    {
        len++;
        i++;
    }


    // checks if the string is palindrome or not
    for(i = 0; i < len; i++)
    {
        if(str[i] != str[len - 1 - i])
        {
            printf("%s is not a palindrome\n", str);
            return 0;
        }
    }
    printf("%s is a palindrome\n", str);
    return 0;
}
