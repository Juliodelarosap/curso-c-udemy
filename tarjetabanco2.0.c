#include <stdio.h>
#include <cs50.h>

bool isVisa(long long number)
{
    int length = 0;
    long long temp = number;
    
    while (temp > 0)
    {
        temp /= 10;
        length++;
    }
    
    return (length == 13 || length == 16) && (number / 1000000000000 == 4);
}

bool isMasterCard(long long number)
{
    int length = 0;
    long long temp = number;
    
    while (temp > 0)
    {
        temp /= 10;
        length++;
    }
    
    return length == 16 && (number / 100000000000000 >= 51 && number / 100000000000000 <= 55);
}

bool isAmericanExpress(long long number)
{
    int length = 0;
    long long temp = number;
    
    while (temp > 0)
    {
        temp /= 10;
        length++;
    }
    
    return length == 15 && (number / 10000000000000 == 34 || number / 10000000000000 == 37);
}

int main(void)
{
    long long number = get_long("Enter credit card number: ");
    
    if (isAmericanExpress(number))
    {
        printf("AMEX\n");
    }
    else if (isMasterCard(number))
    {
        printf("MASTERCARD\n");
    }
    else if (isVisa(number))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
    
    return 0;
}
