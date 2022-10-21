#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   srand(time(NULL));
   rand();

   int x=0;

   printf("Eine Zufallszahl zwischen 1 und 6 wird generiert.....\n");

   x= rand()%6+1;

   printf("Die gewuenschte Zahl ist: %d \n",x);

   if (x>3)
   {printf("Ueberdurchschnittlich!");}

   else
   {
       switch(x)
       {
            case 1: printf("Oh Mann!"); break;
            case 2: printf("Naja");     break;
            case 3: printf("O.K");      break;
            default: printf("Häh??");   break;
       }
   }



}
