#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main ()
{

float ai1, bi1, ci1, ai2, bi2, ci2, ai3, bi3, ci3, temp;
float s1=0, p1=0, s2=0, p2=0, s3=0, p3=0;



printf("Enter the first triangle: ");
scanf("%f", &ai1);
scanf("%f", &bi1);
scanf("%f", &ci1);
     p1= (ai1+bi1+ci1)/2;
     s1= sqrt(p1*(p1-ai1)*(p1-bi1)*(p1-ci1));


printf("\nEnter the second triangle: ");
scanf("%f", &ai2);
scanf("%f", &bi2);
scanf("%f", &ci2);
     p2= (ai2+bi2+ci2)/2;
     s2= sqrt(p2*(p2-ai2)*(p2-bi2)*(p2-ci2));

printf("\nEnter the third triangle: ");
scanf("%f", &ai3);
scanf("%f", &bi3);
scanf("%f", &ci3);
     p3= (ai3+bi3+ci3)/2;
     s3= sqrt(p3*(p3-ai3)*(p3-bi3)*(p3-ci3));


/* sort areas */

printf("\n Sorted ares: \n");
  if (s1 <= s2 && s2 <= s3)
  {
    printf("%.0f\t %.0f\t %.0f,\t and the total area is: %.2f\n",ai1,bi1,ci1,s1);
    printf("%.0f\t %.0f\t %.0f,\t and the total area is: %.2f\n",ai2,bi2,ci2,s2);
    printf("%.0f\t %.0f\t %.0f,\t and the total area is: %.2f\n",ai3,bi3,ci3,s3);

  }
  else
  {

    if (s1 <= s3 && s3 <= s2)
    {
    printf("%.0f\t %.0f\t %.0f,\t and the total area is: %.2f\n",ai1,bi1,ci1,s1);
    printf("%.0f\t %.0f\t %.0f,\t and the total area is: %.2f\n",ai3,bi3,ci3,s3);
    printf("%.0f\t %.0f\t %.0f,\t and the total area is: %.2f\n",ai2,bi2,ci2,s2);


    }
    else
    {

      if (s2 <= s1 && s1 <= s3)
      {
    printf("%.0f\t %.0f\t %.0f,\t and the total area is: %.2f\n",ai2,bi2,ci2,s2);
    printf("%.0f\t %.0f\t %.0f,\t and the total area is: %.2f\n",ai1,bi1,ci1,s1);
    printf("%.0f\t %.0f\t %.0f,\t and the total area is: %.2f\n",ai3,bi3,ci3,s3);

      }
      else
      {

        if (s2 <= s3 && s3 <= s1)
        {

    printf("%.0f\t %.0f\t %.0f,\t and the total area is: %.2f\n",ai2,bi2,ci2,s2);
    printf("%.0f\t %.0f\t %.0f,\t and the total area is: %.2f\n",ai3,bi3,ci3,s3);
    printf("%.0f\t %.0f\t %.0f,\t and the total area is: %.2f\n",ai1,bi1,ci1,s1);
        }
        else
        {

          if (s3 <= s1 && s1 <= s2)
          {
    printf("%.0f\t %.0f\t %.0f,\t and the total area is: %.2f\n",ai1,bi1,ci1,s1);
    printf("%.0f\t %.0f\t %.0f,\t and the total area is: %.2f\n",ai3,bi3,ci3,s3);
    printf("%.0f\t %.0f\t %.0f,\t and the total area is: %.2f\n",ai2,bi2,ci2,s2);
          }
                  else
        {

          if (s3 <= s2 && s2 <= s1)
          {

    printf("%.0f\t %.0f\t %.0f,\t and the total area is: %.2f\n",ai3,bi3,ci3,s3);
    printf("%.0f\t %.0f\t %.0f,\t and the total area is: %.2f\n",ai2,bi2,ci2,s2);
    printf("%.0f\t %.0f\t %.0f,\t and the total area is: %.2f\n",ai1,bi1,ci1,s1);
          }


            }
          }
        }
      }
    }



return 0;
}
