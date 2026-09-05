#include <stdio.h>

int main()
{
    char word[100];
    int i;

    printf("Enter a word: ");
    scanf("%s", word);

    for (i = 0; word[i] != '\0'; i++)
    {
        // Find the length of the word
    }

    printf("Reversed word: ");

    for (i = i - 1; i >= 0; i--)
    {
        printf("%c", word[i]);
    }

    return 0;
}