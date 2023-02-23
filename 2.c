#include <stdio.h>

void convertToBase(int num, int base);

int main()
{
    int num, base;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("Enter the base : ");
    scanf("%d", &base);
    convertToBase(num, base);
    return 0;
}

void convertToBase(int num, int base)
{
    int digit = num / base;
    int remainder = num % base;
    if (digit != 0)
    {
        convertToBase(digit, base);
    }
    if (remainder < 10)
    {
        printf("%d", remainder);
    }
    else
    {
        printf("%c", 'A' + remainder - 10);
    }
}
