#include <stdio.h>

int main()
{
    int number, original, digit;
    int factorial, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while (number != 0)
    {
        digit = number % 10;

        factorial = 1;

        for (int i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
        }

        sum = sum + factorial;

        number = number / 10;
    }

    if (sum == original)
    {
        printf("%d is a Strong Number", original);
    }
    else
    {
        printf("%d is not a Strong Number", original);
    }

    return 0;
}