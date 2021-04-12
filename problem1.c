#include <stdio.h>


int main()
{
    int number;
    int rev;
    int next_digit;
    int last_digit;
    int sum = 0;

    printf ("the input integer is: ");
    scanf("%d", &number);

    last_digit = number - ((number / 10) * 10);
    rev = last_digit;
    sum = sum + last_digit;

    next_digit = (number / 10) - ((number / 100) * 10);
    rev = (rev * 10) + next_digit;
    sum = sum + next_digit;

    next_digit = (number / 100) - ((number / 1000) * 10);
    rev = (rev * 10) + next_digit;
    sum = sum + next_digit;

    next_digit = (number / 1000) - ((number / 10000) * 10);
    rev = (rev * 10) + next_digit;
    sum = sum + next_digit;

    next_digit = (number / 10000) - ((number / 100000) * 10);
    rev = (rev * 10) + next_digit;
    sum = sum + next_digit;

    printf ("The reversed integer is: %d",rev);
    printf("\n The Sum of the digits = %d", sum);

    return 0;
}
