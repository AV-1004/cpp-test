#include<stdio.h>
int main(void)
{
    int number,remainder,original,reverse=0;
    printf("enter any number\n");
    scanf("%d",&number);

    original=number;
    while(number!=0){
        remainder = number%10;
        reverse = reverse*10 + remainder;
        number = number/10;
    }
if(original == reverse)
{
    printf("The number %d is a palindrome\n",original);
}
else
{
    printf("The number %d is not a palindrome\n",original);
}

} 