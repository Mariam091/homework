//Write a program that generates and prints 50 random integers, each between 3 and 6.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  x=3;
    int y=6;

    for (int i=0; i<50; i++)
    {
        int result = (rand()%(y-x+1))+x;
          printf ("%d\n", result);
        }
    }


