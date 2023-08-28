// Write a program that asks the user for weight in kilograms and converts it to pounds. There are 2.2 pounds in a kilogram.
#include <stdio.h>


int main() 
{    
     float pound = 2.2;	
     float  kg = 0;
      
      printf ("Enter weight in kg\n");
      scanf ("%f", &kg);
    
       float weight=0;
       weight = kg * pound; 

       printf ("weight is %f\n", weight);
     
}

//Write a program that asks the user to enter two numbers, x, and y, and computes | x − y | /  x+y.
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

//Write a program that asks the user to enter three numbers (use three separate input statements). Create variables called total and average that hold the sum and average of the three numbers and print out the values of total and average.

#include <stdio.h>

int main()
{  
    int x=0;
    int y=0;
    int z=0;

    printf ("Enter three numbers\n");
    scanf ("%d %d %d", &x, &y, &z);

    int total=0;
    int average=0;

    total = x + y + z;
    average = total / 3;

    printf ("total=%d\n", total);
    printf ("average=%d\n", average);



}	

//    Print a triangle like the one below. 

#include <stdio.h>


int main()
{
   int i=0;
   int j=0;
     
     for (i = 0; i < 4; i++)
     {  
	 for (j = 0; j < 1 + i; j++)
	 {
	   printf ("*");
	 }	
      printf ("\n");

     }

}	
