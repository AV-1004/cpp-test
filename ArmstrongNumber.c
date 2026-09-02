#include <stdio.h>

int main()
{
    int number, remainder, original, reverse = 0, armstrongNumber = 0;

    printf("Enter any number: ");
    scanf("%d", &number);

    original = number;

    while (number != 0)
    {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        armstrongNumber = armstrongNumber + (remainder * remainder * remainder);
        number = number / 10;
    }

    if (original == reverse)
    {
        printf("The number %d is a palindrome\n", original);
    }
    else
    {
        printf("The number %d is not a palindrome\n", original);
    }

    if (original == armstrongNumber)
    {
        printf("The number %d is an Armstrong number\n", original);
    }
    else
    {
        printf("The number %d is not an Armstrong number\n", original);
    }

    return 0;
}