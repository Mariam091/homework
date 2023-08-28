#include <stdio.h>
#include <stdlib.h>

int main()
{
     float x=0;
     float y=0;
     float result=0;

     printf ("Please enter two numbers\n");
     scanf ("%f %f", &x, &y);

      if ((x+y) != 0) {
        result =(abs(x-y))/(x+y);

       printf ("%f\n", result);

      }
       else
            printf ("sxal e");


   }

