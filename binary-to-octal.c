#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int oct(long long num)
{
    int deci=0 ,i=0, oct=0, j=1;
    while (num!=0)
    {
        deci += (num % 10) * pow(2, i);
        ++i;
        num /= 10;
    }
    while (deci!=0)
    {
        oct += (deci % 8) * j;
        deci /= 8;
        j *= 10;
    }
    return(oct);
}

int main()
{

    long long bin;
    printf("Enter the binary number: \n");
    scanf("%lld", &bin);

    printf("The Octal representation of %lld is: %d\n", bin, oct(bin));
    return 0;



}

