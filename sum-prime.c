#include <stdio.h>
#include <stdlib.h>


int prime_checkr(int num)
{
    int num1,num2, temp=0;
    for (int i=2; i<=num/2; i++)
    {
        int prime1 = 1;
        for (int j=2; j<i; j++)
        {
            if(i==j)
            {
                continue;
            }
            if (i%j == 0)
            {
                prime1 = 0;
                break;
            }
            else
            {
                prime1=1;
                continue;
            }
        }

        if (prime1==1)
        {
            num1=i;
            num2= num-num1;
            int prime2;
            for (int j_2=2; j_2<num2; j_2++)
            {
                if(j_2==num2)
            {
                continue;
            }

            if (num2%j_2 == 0)
            {
                prime2 = 0;
                break;
            }
            else
            {
                prime2=1;
                continue;
            }

            }
            temp=prime2;
            if(temp==1) 
            break;
        }
    }
    return(temp);
}

int main()
{
    int num;
    printf("Enter the number: \n");
    scanf("%d",&num);

    if (prime_checkr(num) == 1)
    {
        printf("Yes! the number can be expressed.\n");
    }
    else
    {
        printf("NO! the number can Not be expressed.\n");
    }


    return 0;
}

