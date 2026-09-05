#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a letter: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Capital letter");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Small letter");
    }
    else
    {
        printf("Not a letter");
    }

    return 0;
}