// C program to use gets() and puts()

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20];
    // reads the string using gets
    gets(str);
    // displays the string using puts
    puts(str);
    system("pause");
    return 0;
}
