#include<stdio.h>
#include<stdlib.h>

int main()
{

    int n=0,hight=1,i;
    printf("The number of thr growth cycles: ");
    scanf("%d",&n);
    
    
       for(i=1;i<=n;i++)
       {
           if(i%2==1)
               hight=2*hight;
           else
               hight=hight+1;
       }
        printf("The hight= %d\n",hight);
     
    return 0;
}