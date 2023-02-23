#include <stdio.h>

int countDigits(int num)
{
    static int count = 0;
    if (num != 0)
    {
        count++;
        countDigits(num / 10);
    }

    return count;
}

int main()
{
    int number;

    printf("Enter any number : ");
    scanf("%d", &number);

    printf("\nTotal number of digits are : %d\n", countDigits(number));
}
