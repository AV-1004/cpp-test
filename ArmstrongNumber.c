#include <stdio.h>

int main()
{
    int num, rem, og, reverse = 0, armstrongNumber = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    og= num;

    while (num!= 0)
    {
        rem= num % 10;
        reverse = reverse * 10 + rem;
        armstrongNumber = armstrongNumber + (rem * rem * rem);
        num = num/ 10;
    }

    if (og == reverse)
    {
        printf("The number %d is a palindrome\n", og);
    }
    else
    {
        printf("The number %d is not a palindrome\n", og);
    }

    if (og == armstrongNumber)
    {
        printf("The number %d is an Armstrong number\n", og);
    }
    else
    {
        printf("The number %d is not an Armstrong number\n", og);
    }

    return 0;
}