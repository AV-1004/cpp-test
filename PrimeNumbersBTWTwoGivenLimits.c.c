#include <stdio.h>

int main()
{
    int lowerLimit, upperLimit, i, j, isPrime;

    printf("Enter any two numbers between which you want to find the prime numbers: ");
    scanf("%d %d", &lowerLimit, &upperLimit);

    printf("Prime numbers between %d and %d are: ", lowerLimit, upperLimit);

    for (i = lowerLimit; i <= upperLimit; i++)
    {
        isPrime = 1;

        if (i < 2)
        {
            isPrime = 0;
        }
        else
        {
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}