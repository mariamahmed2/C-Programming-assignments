#include <stdio.h>
#include <stdlib.h>


int greatest_devisor(int num1, int num2)  /* num1 is assumed to be greater than num2*/
{
    if(num1 % num2==0)
    {
        return num2;
    }

    for (int i=num2-1; i>0; i--)
    {
        if(num1 % i==0 && num2 % i==0)
        {
            return i;
        }
        
    }
}


int main()
{
    int a, b, temp;
    printf("Enter the two numbers: \n");
    scanf("%d %d", &a, &b);

    if(b >= 0)
    {
        if(a >= b)
        {
            printf("%d\n", greatest_devisor(a, b));
        }
        else
         {
            temp=b;
            b=a;
            a=temp;

             printf("%d\n", greatest_devisor(a, b));
         }
    }
    else
    {
        b *= -1;
        if(a >= b)
        {
            printf("%d\n", greatest_devisor(a, b));
        }
        else
        {
            temp=b;
            b=a;
            a=temp;
            printf("%d\n", greatest_devisor(a, b));
        }
    }

    return 0;
}
